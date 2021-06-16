#ifndef NeurenalNetworkNN2
#define NeurenalNetworkNN2

#include "Perceptron_cachee.h"
#include <vector>

class NN2 {
    public:
        NN2(int, int , int , Fonction_activation *);
        char evaluation(Input &);
        void apprentissage(Input &, double);
        Perceptron *get_perceptron(int);

    private:
        std::vector<Perceptron *> coucheSortie;
        std::vector<Perceptron_cachee> coucheCachee;
};

#endif