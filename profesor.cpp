#include "profesor.h"
#include "alumno.h"

profesor::profesor(){
}
profesor::~profesor(){
}


void profesor::addAlumno(alumno *alu){
    vectorAlumnos.push_back(alu);
}



void profesor::setNota(int id, double nota1){
    vectorAlumnos[id]->addNota(nota1);
}

void profesor::setNota(int id, double nota1, double nota2){
    vectorAlumnos[id]->addNota(nota1);
    vectorAlumnos[id]->addNota(nota2);
}

void profesor::setNota(int id, double nota1, double nota2, double nota3){
    vectorAlumnos[id]->addNota(nota1);
    vectorAlumnos[id]->addNota(nota2);
    vectorAlumnos[id]->addNota(nota3);
}





float profesor::getMedia(int id){
    float notaMedia;
    switch(vectorAlumnos[id]->getNumberNotes())
    {
        case 1:
        notaMedia=vectorAlumnos[id]->getNota(0);
        break;
        case 2:
        notaMedia=(vectorAlumnos[id]->getNota(0)+vectorAlumnos[id]->getNota(1))/vectorAlumnos[id]->getNumberNotes();
        break;
        case 3:
        notaMedia=(vectorAlumnos[id]->getNota(0)+vectorAlumnos[id]->getNota(1)+vectorAlumnos[id]->getNota(2))/vectorAlumnos[id]->getNumberNotes();
        break;
    }
    return notaMedia;
}





void profesor::getAlumnos()
{
    cout << "ID\t\tname\t\tsurnames\t\tDNI\t\tNota Media\n";
    for(int i=0; i<(int)vectorAlumnos.size(); i++)
   {
        cout << i << "\t\t" << vectorAlumnos[i]->getname() << "\t\t" << vectorAlumnos[i]->getsurnames() << "\t\t" << vectorAlumnos[i]->getDni() << "\t" << getMedia(i) << endl;
    }
}




void profesor::getMejorMedia(){
    int id=0;
    float nota=0;

    for(int i=0; i<(int)vectorAlumnos.size(); i++)
    {
        if(vectorAlumnos[i]->getNumberNotes() == 3 && nota<getMedia(i))
        {
            nota=getMedia(i);
            id=i;
            
        }
    }
    cout << endl;
    cout << "El alumno con mas nota es: " << vectorAlumnos[id]->getname() << " " << vectorAlumnos[id]->getsurnames() << " [" << nota << "]" << endl;
}

