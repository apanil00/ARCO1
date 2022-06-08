#include "alumno.h"

alumno::alumno()
{

}
alumno::~alumno()
{

}

void alumno::addNota(float notaAlumno)
{
   notas.push_back(notaAlumno);
}

float alumno::getNota(int posicion)
{
    return notas[posicion];
}

//Metodo que devuelve el numero de notas que tiene un alumno
int alumno::getNumberNotes()
{
    return notas.size();
}
