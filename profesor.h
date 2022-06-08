#ifndef PROFESOR_H
#define PROFESOR_H

# include "persona.h"
# include "alumno.h"
# include <vector>

class profesor : public persona{
public:
    profesor();
    ~profesor();
    vector <alumno*> vectorAlumnos;
    void addAlumno(alumno *alu);
    void setNota(int id, double nota1);
    void setNota(int id, double nota1, double nota2);
    void setNota(int id, double nota1, double nota2, double nota3);
    void getAlumnos();
    void getMejorMedia();
    float getMedia(int id);

};

#endif
