#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class persona
{

public:
    persona();
    ~persona();

    persona(string suname, string surname, string numDni);


    string getname();
    void setname(string personName);

    string getsurnames();
    void setsurnames(string personSurname);

    string getDni();
    void setDni(string personDni);

private:
    string name;
    string surnames;
    string dni;
};

#endif
