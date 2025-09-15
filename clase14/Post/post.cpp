#include "post.h"
#include <string.h>

Post::Post(char numero[10],
char url[250],
char autor[200],
char fecha[8])
{
  strcpy(this->numero, numero);
  strcpy(this->url, url);
  strcpy(this->autor, autor);
  strcpy(this->fecha, fecha);
}

void Post::agregarComentario(std::string comentario)
{
    this->comentarios.push_back(comentario);
}

int Post::cantidadComentarios()
{
    return this->comentarios.size();
}
