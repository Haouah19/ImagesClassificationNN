#include "Image.h"
#include <fstream>
#include <iostream>
using namespace std; 

Image::Image(int i){
    

}

double Image::operator[](int j){
    return pixel[j];
}