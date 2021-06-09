#include "Perceptron.h"

class NN1{
    public:
        NN1(int, int, Fonction_activation *);
        char evaluation(Input &);
        void apprentissage(Input &, double);

    private:
        std::vector<Perceptron> network;
};
