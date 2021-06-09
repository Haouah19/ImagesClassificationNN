#ifndef NeurenalNetworkNN1
#define NeurenalNetworkNN1

#include "Perceptron.h"
#include "Fonction_activation.h"
#include "Input.h"
#include <vector>


class NN1{
    public:
        NN1(int, int, Fonction_activation *);
        char evaluation(Input &);
        void apprentissage(Input &, double);

    private:
        std::vector<Perceptron> network;
};

#endif
