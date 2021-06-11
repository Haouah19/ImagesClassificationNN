#include <iostream>
#include "Sigmoide.h"
#include "Tanh.h"
#include "NN1.h"
#include "Apprentissage.h"
#include "Iris.h"


using namespace std;

int main(int argc, char *argv[])
{
    cout << "=====  Launch of the neural network =====" << '\n';
    NN1 *network = new NN1(784, 10, new Sigmoide());

    // Problème sur le template apprentissage, faut que ça soit dans le 
    //Apprentissage<Iris,150> ap1(network);
	//ap1.apprendre_base(15000,0.1);
	//ap1.apprendre_base(15000,0.1);


}
