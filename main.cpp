#include <iostream>
#include "persona.h"
#include "profesor.h"
#include "alumno.h"
#include <string>

using namespace std;

void Calificando();

int main()
{
    Calificando();
    return 0;
}

void Calificando(){
    persona *profesor1 = new profesor();
    profesor1->setname("Alfonso");
    profesor1->setsurnames("Fernandez Perez");
    profesor1->setDni("24585879C");

    persona *alumno1 = new alumno();
    alumno1->setname("Fran");
    alumno1->setsurnames("Igea Arrisqueta");
    alumno1->setDni("58743621Z");

    persona *alumno2 = new alumno();
    alumno2->setname("Luis");
    alumno2->setsurnames("Tudanca Lopez");
    alumno2->setDni("87598426R");

    persona *alumno3 = new alumno();
    alumno3->setname("Luismi");
    alumno3->setsurnames("Santos Reyero");
    alumno3->setDni("12456249Y");

    persona *alumno4 = new alumno();
    alumno4->setname("Pablo");
    alumno4->setsurnames("Fernandez Leon");
    alumno4->setDni("65482451Y");


    ((profesor*)profesor1)->addAlumno((alumno*) alumno1);
    ((profesor*)profesor1)->addAlumno((alumno*) alumno2);
    ((profesor*)profesor1)->addAlumno((alumno*) alumno3);
    ((profesor*)profesor1)->addAlumno((alumno*) alumno4);


    ((profesor*)profesor1)->setNota(0,2.1);
    ((profesor*)profesor1)->setNota(1,5.4,3.7);
    ((profesor*)profesor1)->setNota(2,9.8,7.5,8.7);
    ((profesor*)profesor1)->setNota(3,1.2,9.87,9.75);


    ((profesor*)profesor1)->getAlumnos();
    ((profesor*)profesor1)->getMejorMedia();

    string dni;
    int salir = 0;
    while (salir ==0){
        cout << "Introduce un DNI\n";
        cin >> dni;
        cout << "Has introducido el DNI [" << dni << "]\n";

        if (profesor1->getDni() == dni){
            cout << "El DNI corresponde a un profesor [" << profesor1->getname() << "]\n"  ;
            ((profesor*)profesor1)->getAlumnos();
            ((profesor*)profesor1)->getMejorMedia();
            salir = 1;
        }else{
            for(int id=0; id<((profesor*)profesor1)->vectorAlumnos.size(); id++){
                string dniAlumno = ((profesor*)profesor1)->vectorAlumnos[id]->getDni();
                if (dniAlumno == dni){
                cout << "El DNI corresponde a un alumno\n"  ;
                cout << "ID\t\tname\t\tsurnames\tDNI\t\tNota Media\n";
                cout <<  id+1 << "\t\t" << ((profesor*)profesor1)->vectorAlumnos[id]->getname() << "\t\t" << ((profesor*)profesor1)->vectorAlumnos[id]->getsurnames() << "\t" << dniAlumno << "\t" << ((profesor*)profesor1)->getMedia(id) <<endl;
                salir = 1;
                }

                }
            }
        if(salir==0){
            cout << "El DNI introducido no se encuentra en el sistema\n";
        }

     }


}

