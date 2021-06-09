
#include <iostream>
#include <fstream>

#include "perceptron.h"
using namespace std; 

Perceptron::Perceptron(int inputSize, Fonction_activation* functionActivation, char label){
    Perceptron::functionActivation = functionActivation;
    Perceptron::label = label;
    
    int bornInf = -1;
    int bornSup = 1;
    for(int i=0;i<=inputSize;i++){
        double weight = (double) (rand()%(bornSup-bornInf+1) + bornInf);
        weights.push_back(weight);
    }
}

double Perceptron::get_poids(int i){
    return Perceptron::weights[i];
}

double Perceptron::forward(Input & input){ 
    double sum = 0;
    for(int i = 1; i<=weights.size(); i++){ // à vérifier 
        sum = sum + (get_poids(i) * input[i]);
    }
    return functionActivation->operator ()(sum+get_poids(0));
}

void Perceptron::calcul_delta(Input & input){
    double sum = 0;
    for(int i = 1; i<=weights.size(); i++){ // à vérifier 
        sum = sum + (get_poids(i) * input[i]);
    }
    double labelClass = (input.get_label() == label) ? 1 : 0 ;
    Perceptron::delta = functionActivation->prim(get_poids(0) + sum) * (forward(input) - labelClass);
}

double Perceptron::get_delta(){
    return delta;
}

void Perceptron::backprop(Input & input, double rate){
    Perceptron::weights[0] = get_poids(0) - rate * Perceptron::get_delta();
    for(int i=0; i<weights.size(); i++) get_poids(i+1) - rate * input.operator[](i) * get_delta();
}

char Perceptron::get_label(){
    return label;
}