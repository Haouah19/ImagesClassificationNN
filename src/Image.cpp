#include "Image.h"
#include <fstream>
#include <iostream>
using namespace std;

Image::Image(int i){
    char pixelValue;
    int data;
    char pipe[784];

    ifstream labels("../data/MNIST_training/train-labels.idx1-ubyte",
               ios::in | ios::binary);

    if (labels.is_open()){
        labels.seekg(8 + i, labels.cur);
        labels.read((char*) &pixelValue, sizeof(char));
        data = (int) pixelValue;
        labels.close();

    } else cout << "Unable to open file" << '\n';

    set_label(char(pixelValue));

    ifstream caracteristics("../data/MNIST_training/training" + to_string(i),
    ios::in | ios::binary);

    if (caracteristics.is_open()) {
        caracteristics.seekg(1078, caracteristics.cur);
        for (int i = 0; i < 784; i++) {
            caracteristics.read((char*) &pipe[i], sizeof(char));
            pixel[i] = (double) pipe[i];
        }
        caracteristics.close();

    } else cout << "Unable to open file" << '\n';

}

double Image::operator[](int i){
    return pixel[i];
}

void Image::set_label(char i) {
    Label = i;
}

char Image::get_label(){
    return Image::Label;
}