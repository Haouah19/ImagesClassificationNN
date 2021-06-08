#include "Fonction_activation.h"


class Sigmoide : public Fonction_activation{
    public:
        double operator()(double);
        double prim(double);
};
