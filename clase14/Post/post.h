#ifndef POST_H
#define POST_H
#include <string>
#include <vector>

class Post
{
private:
    char numero[10];
    char url[250];
    char autor[200];
    char fecha[8];
    std::vector<std::string> comentarios;
public:
    Post(char numero[10],char url[250], char autor[200], char fecha[8]);
    void agregarComentario(std::string comentario);
    int cantidadComentarios();
};

#endif // POST_H
