# include "NN2.h"
#include "Input_intermediaire.h"
#include <vector>

NN2::NN2(int InputSize , int nbLabels, int nbPerceptronsCachee, Fonction_activation *functionActivation) {
    for (int i = 0; i < nbLabels; i++){
        coucheSortie.push_back(new Perceptron(InputSize, functionActivation, '0' + i));
    }
    for (int i = 0; i < nbPerceptronsCachee; i++){
        coucheSortie.push_back(new Perceptron_cachee(InputSize, functionActivation, '0' + i, coucheSortie));
    }
}

void NN2::apprentissage(Input & input, double rate){
    Input_intermediaire inputIntermediaire(input.get_label());
    for (int i = 0; i < coucheCachee.size(); i++) {
        inputIntermediaire.add(coucheCachee.at(i).forward(input));
    }
    for (int i = 0; i < coucheSortie.size(); i++) {
        coucheSortie.at(i)->calcul_delta(inputIntermediaire);
    }
    for (int i = 0; i < coucheCachee.size() ; i++) {
        coucheCachee.at(i).calcul_delta(input);
    }
    for (int i = 0; i < coucheCachee.size(); i++) {
        coucheCachee.at(i).backprop(input, rate);
    }
    for (int i = 0; i < coucheSortie.size(); i++) {
        coucheSortie.at(i)->backprop(inputIntermediaire, rate);
    }
}

char NN2::evaluation(Input & input){
    std::vector<double> perceptronValues;
    Input_intermediaire inputIntermediaire(input.get_label());
    for (int i=0; i<coucheCachee.size(); i++){
        inputIntermediaire.add(coucheCachee.at(i).forward(input));
    }
    for (int i=0; i<coucheSortie.size();i++){
        perceptronValues.push_back(coucheSortie.at(i)->forward(inputIntermediaire));
    }
    int maxElIndex = max_element(perceptronValues.begin(),perceptronValues.end()) - perceptronValues.begin();
    char label ='0' + maxElIndex;
    return label;
}
