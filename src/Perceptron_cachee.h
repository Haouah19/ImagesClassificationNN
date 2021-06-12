#ifndef NeurenalNetworkPerceptronCachee
#define NeurenalNetworkPerceptronCachee

#include "Perceptron.h"
#include <vector>

class Perceptron_cachee : public Perceptron{
    private:
        std::vector<Perceptron *> listPerceptrons;

    public:
        Perceptron_cachee(int, Fonction_activation *, char, std::vector<Perceptron *> &);
        void calcul_delta(Input &);
        void backprop(Input &, double);
};

#endif