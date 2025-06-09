#include <iostream>

#include <gestor.h>

#include <enviocertificado.h>
#include <enviocomun.h>
#include <envioxpeso.h>

using namespace std;

int main()
{
    cout << "#### 1";
    Gestor *ges  = new Gestor();
    EnvioComun *com1 = new EnvioComun("xxx000Ca",150);
    EnvioComun *com2 = new EnvioComun("xxx000Cb",200);
    EnvioComun *com3 = new EnvioComun("xxx000Cc",150);
    ges->addEnvio(com1);
    ges->addEnvio(com2);
    ges->addEnvio(com3);

    cout << "#### 2";
    EnvioCertificado *cert1 = new EnvioCertificado("xxx000CEa",150,100);
    EnvioCertificado *cert2 = new EnvioCertificado("xxx000CEb",150,50);
    EnvioCertificado *cert3 = new EnvioCertificado("xxx000CEc",150,500);
    ges->addEnvio(cert1);
    ges->addEnvio(cert2);
    ges->addEnvio(cert3);
    cout << "#### 3" << std::endl;
    EnvioXPeso *envpeso1 = new EnvioXPeso("xxx000Xa",150,0);
    EnvioXPeso *envpeso2 = new EnvioXPeso("xxx000Xb",150,1);
    EnvioXPeso *envpeso3 = new EnvioXPeso("xxx000Xc",150,2);
    ges->addEnvio(envpeso1);
    ges->addEnvio(envpeso2);
    ges->addEnvio(envpeso3);

    cout << "################ Sobreescritura ##################" << endl;
    int cantidad = ges->getCantidad();
    EnvioComun * ePtr;
    for(int i=0;i<cantidad;i++){
        ePtr = (ges->getEnvio(i));
        //cout <<  ePtr->getCodigo() << " " << ePtr->getMonto() << endl;
        cout <<  *ePtr;
    };
/*
    cout << "################ Sobre escritura de << ###############" << endl;

    for(int i=0;i<cantidad;i++){
        EnvioComun *ptr1 = nullptr;
        EnvioCertificado *ptr2 = nullptr;
        EnvioXPeso *ptr3 = nullptr;
        if(ptr1 = dynamic_cast<EnvioComun *>((ges->getEnvio(i))))
               cout << " " <<*ptr1<< endl;;
        if(ptr2 = dynamic_cast<EnvioCertificado *>((ges->getEnvio(i))))
               cout << " " << *ptr2<< endl;;
        if(ptr3 = dynamic_cast<EnvioXPeso *>((ges->getEnvio(i))))
               cout << " " << *ptr3<< endl;
        cout << " " << *((ges->getEnvio(i)))<< endl;
       };

*/
    return 0;
}
