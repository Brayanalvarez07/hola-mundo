#include <iostream>
using namespace std;
#include <Mascota.hpp>
#include <Alimento.hpp>
#include <Dibujo.hpp>
#include <list>
int main(int argc, char const *argv)
{
        Dibujo dibujo("./assets/kokoa.txt");
        Dibujo dibujo2("./assets/dog.txt");
        dibujo.Dibujar();
        dibujo2.Dibujar();
        list <Dibujo> dibujos;
        // dibujos.push_front(dibujo)
        // dibujos.push_front(dibujo2)

        Mascota m1,m2,m3;

        Alimento alimento(5);

        list<Mascota>mascota;
        mascota.push_front(m1);
        mascota.push_front(m2);
        mascota.push_front(m3);


        // m1.Comer(alimento);
        // m2.Comer(alimento);
        // m3.Comer(alimento);
        for (auto &&mascotai : mascota)
        {
                mascotai.Comer(alimento);
        }
        for (auto &&mascotai : mascota)
        {
        cout<<"Mascota" <<mascotai.LeerEnergia()<<endl;
                
        }
        

}
