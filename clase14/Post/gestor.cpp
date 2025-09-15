#include "gestor.h"
#include <iostream>
#include <fstream>
#include <algorithm>

Gestor::Gestor()
{

}

void Gestor::LeerArchi()
{
    std::ifstream archi("posts.dat", std::ios::binary);
    std::ifstream archiComentario;

    if (archi.is_open()) {
        postStruct postStr;
        while(archi.read((char*)&postStr, sizeof(postStruct))) {

            Post post(postStr.numero,
                      postStr.url,
                      postStr.autor,
                      postStr.fecha);

            std::string nombre = "comentario_"
                    + std::string(postStr.numero)
                    + ".txt";

            archiComentario.open(nombre);
            if (archiComentario.is_open()) {
                std::string comentario;

                while(getline(archiComentario, comentario)) {
                    post.agregarComentario(comentario);
                }

                archiComentario.close();
            }

            this->posts.push_back(post);
        }

        archi.close();
    }
}

bool mayorComentario(Post a, Post b) {
    return a.cantidadComentarios() > b.cantidadComentarios();
}

void Gestor::ordenar()
{
    std::sort(this->posts.begin(), this->posts.end(),
              [](Post a, Post b) {
        return a.cantidadComentarios() > b.cantidadComentarios();
    });

    //std::sort(this->posts.begin(), this->posts.end(), mayorComentario);

}
