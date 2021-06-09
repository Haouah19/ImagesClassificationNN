#ifndef NeurenalNetworkTanh
#define NeurenalNetworkTanh

#include "Fonction_activation.h"

class Tanh : public Fonction_activation{
    public:
        double operator()(double);
        double prim(double);
};

#endif