#ifndef NeurenalNetworkIris
#define NeurenalNetworkIris

#include "Input.h"

class Iris: public Input{
private:
    double m_description[4];
    char Label;
public:
    Iris(int); // Constructeur prenant en paramètre un entier correspondant à l'indice de la fleur.
    double operator[](int);  // prend en paramètre un entier correspondant à l'indice de la case et qui renvoie le double.
    char get_label();
    void set_label(char);

};

#endif