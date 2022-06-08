#include "persona.h"
#include <string>

using namespace std;

persona::persona(){
}
persona::~persona(){
}


persona::persona(string personName, string personSurname, string personDni){
    this->name = personName;
    this->surnames = personSurname;
    this->dni = personDni;
}

string persona ::getname(){
    return name;
}
void persona ::setname(string personName){
    name = personName;
}



string persona ::getsurnames(){
    return surnames;
}
void persona ::setsurnames(string personSurname){
    surnames = personSurname;
}


string persona ::getDni(){
    return dni;
}
void persona ::setDni(string personDni)
{
    dni = personDni;
}
