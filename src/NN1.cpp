#include "NN1.h"

NN1::NN1(int InputSize , int NbPerceptron, Fonction_activation *functionActivation){
    
    for(int i=0; i< NbPerceptron; i++){
        network.push_back(Perceptron(InputSize, functionActivation ,'0' + i));
    }

}

char NN1::evaluation(Input & input){
    char label = '0';
    double bestScore = network[0].forward(input);
    double tmp;
    for(int i=1; i <network.size(); i++){
        tmp = network[i].forward(input);
        if (tmp > bestScore){
            label = '0'+ i;
        }
    }
    return label;
}

void NN1::apprentissage(Input & input, double rate){
    for(int i=0; i<network.size(); i++){
        network[i].backprop(input,rate);
    }
}