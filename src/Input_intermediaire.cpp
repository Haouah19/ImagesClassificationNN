#include "Input_intermediaire.h"

Input_intermediaire::Input_intermediaire(char label){
    set_label(label);
}

void Input_intermediaire::add(double value){
    values.push_back(value);
}

double Input_intermediaire::operator[](int i){
    return values.at(i);
}

void Input_intermediaire::set_label(char i) {
    Label = i;
}

char Input_intermediaire::get_label(){
    return Input_intermediaire::Label;
}