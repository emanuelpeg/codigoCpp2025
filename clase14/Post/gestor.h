#ifndef GESTOR_H
#define GESTOR_H
#include <vector>
#include "post.h"


struct postStruct
{
    char numero[10];
    char url[250];
    char autor[200];
    char fecha[8];
};

class Gestor
{
private:
    std::vector<Post> posts;
public:
    Gestor();
    void LeerArchi();
    void ordenar();
};

#endif // GESTOR_H
