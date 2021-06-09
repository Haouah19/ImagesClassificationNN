#ifndef NeurenalNetworkPerceptron
#define NeurenalNetworkPerceptron

#include "Fonction_activation.h"
#include "Input.h"
#include <vector>

class Perceptron {
    public:
        std::vector<double> weights;
        Fonction_activation *functionActivation;
        double delta;
        char label;

        Perceptron(int, Fonction_activation*, char);
        double get_poids (int);
        double forward(Input &);
        void calcul_delta(Input &);
        double get_delta();
        void backprop(Input &, double);
        char get_label();


};

#endif