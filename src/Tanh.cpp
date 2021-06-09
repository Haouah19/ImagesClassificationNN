
#include <math.h>
#include "Tanh.h"

double Tanh::operator()(double x) {
    return (exp(x) - exp(-x))/(exp(x)+exp (-x));
}

double Tanh::prim(double x){
    return 1. - pow((operator()(x)),2) ;
}
