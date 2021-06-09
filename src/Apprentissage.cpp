#include "Apprentissage.h"

template<class inputType, int nbInputMax> Apprentissage<inputType,nbInputMax>::Apprentissage(NN1 *network){
    this->network=network;
}

template<class inputType, int nbInputMax> void Apprentissage<inputType,nbInputMax>::apprendre_base(int Nbiterations, double rate){
    for(int i = 0; i <Nbiterations ; i++){
        int randIndex = (rand() % nbInputMax);
        inputType input(randIndex);
        network->apprentissage(input, rate);
    }
}

template<class inputType, int nbInputMax> int Apprentissage<inputType,nbInputMax>::evaluer() {
    int cptMatched = 0;
    for (int i = 0; i < nbInputMax; i++) {
        inputType input(i);
        char label = input.get_label();
        if(n->evaluation(input)==label){
            cptMatched++;

        }
    }
    return cptMatched;
}