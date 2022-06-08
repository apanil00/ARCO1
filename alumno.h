# ifndef ALUMNO_H
# define ALUMNO_H
# include "persona.h"
# include <vector>

class alumno : public persona{
    public:
    alumno();
    ~alumno();
    void addNota(float alumno);
    float getNota(int id);
    int getNumberNotes();

    vector <float> notas;
};

#endif
