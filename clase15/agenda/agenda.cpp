#include "agenda.h"
#include "normal.h"
#include "archivotxt.h"
#include "repe.h"
#include <fstream>
#include <algorithm>
#include <map>

Agenda::Agenda()
{

}

void Agenda::add(Tarea *t)
{
    this->tareas.push_back(t);
}

void Agenda::leer()
{
    std::ifstream archi("data.dat", std::ios::binary);
    TareaStr str;
    Tarea* tarea;
    if (!archi.is_open()) return;

    while(archi.read((char*)&str, sizeof(TareaStr))) {
        switch (str.tipo) {
        case 'N':
            tarea = new Normal();
            break;
        case 'A':
            tarea = new ArchivoTxt();
            break;
        case 'R':
     tarea = new Repe(this);
            break;
        }
        tarea->setStr(str);
        this->tareas.push_back(tarea);
    }
    archi.close();
}

void Agenda::guardar()
{
    std::ofstream archi("data.dat",
                        std::ios::binary | std::ios::trunc);
    TareaStr str;
    for(auto tarea : this->tareas) {
        str = tarea->getStr();
        archi.write((char*)&str, sizeof(TareaStr));
    }
    archi.close();
}

std::vector<Tarea *> Agenda::mayor()
{
    std::vector<Tarea *> resultado;
    std::sort(this->tareas.begin(), this->tareas.end(),
              [](Tarea * a, Tarea * b) -> bool {
        return a->getDuracion() > b->getDuracion();
    });
    int maxDuracion = this->tareas.front()->getDuracion();
    for(auto tarea : this->tareas) {
        if (tarea->getDuracion() == maxDuracion) {
            resultado.push_back(tarea);
        } else {
            break;
        }
    }
    return resultado;
}

std::string Agenda::dia()
{
    std::map<std::string, int> map;
    for(auto tarea : this->tareas) {
        std::string dia(tarea->getFecha());
        map[dia]++;
    }
    std::string maxDia;
    int max = 0;
    for(auto p : map) {
        if (p.second > max) {
            max = p.second;
            maxDia = p.first;
        }
    }
    return maxDia;
}
