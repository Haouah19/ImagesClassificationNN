#ifndef NeurenalNetworkFunctionActivation
#define NeurenalNetworkFunctionActivation

class Fonction_activation {
    public:
        virtual double operator()(double)=0;
        virtual double prim(double)=0;
};

#endif