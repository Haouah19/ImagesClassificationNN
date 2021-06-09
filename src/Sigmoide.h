#ifndef NeurenalNetworkSigmoide
#define NeurenalNetworkSigmoide

#include "Fonction_activation.h"

class Sigmoide : public Fonction_activation{
    public:
        Sigmoide(); 
        double operator()(double);
        double prim(double);
};

#endif