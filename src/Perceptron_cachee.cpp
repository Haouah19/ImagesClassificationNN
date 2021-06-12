#include "Perceptron_cachee.h"
#include "Perceptron.h"
#include <vector>


Perceptron_cachee::Perceptron_cachee(int inputSize, Fonction_activation* functionActivation, char label, std::vector<Perceptron *> &listTmp) : Perceptron(inputSize,functionActivation,label) {
    listPerceptrons = listTmp ;
}

void Perceptron_cachee::calcul_delta(Input &input) {
    double d = get_poids(0);
    double s;
    for (int i = 1; i < weights.size(); i++) {
        d = d + (get_poids(i) * input[i - 1]);
    }
    for(int i=0; i < listPerceptrons.size() ; i++){
        s = (listPerceptrons.at(i)->get_delta()) * (listPerceptrons.at(i)->get_poids(i+1))  ;
    }
    double delta = (functionActivation->prim(d)) * s ;
    this->delta = delta;
}

void Perceptron_cachee::backprop(Input & input, double rate){
    Perceptron_cachee::weights[0] = Perceptron_cachee::weights[0] - rate * Perceptron_cachee::get_delta();
    for (int i=0 ; i<weights.size();i++){
        Perceptron_cachee::weights[i+1] = get_poids(i+1) - (rate * input.operator[](i) * Perceptron::get_delta());
    }
}