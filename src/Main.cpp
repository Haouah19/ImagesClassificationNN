#include <iostream>
#include "Sigmoide.h"
#include "Tanh.h"
#include "NN1.h"

using namespace std;

int main(int argc, char *argv[])
{ 
    cout << "=====  Launch of the neural network =====" << '\n';
    Sigmoide s ;
    NN1 *network = new NN1(784, 10, &s);

    
}