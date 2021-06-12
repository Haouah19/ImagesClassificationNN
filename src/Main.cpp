#include <iostream>
#include "Sigmoide.h"
#include "Tanh.h"
#include "NN1.h"
#include "Image.h"
#include "Apprentissage.h"
#include "Iris.h"



int main(int argc, char *argv[])
{
    std::cout << "=====  Launch of the neural network : IRIS =====" << '\n';
    NN1 *network = new NN1(4, 3, new Sigmoide());
    Apprentissage<Iris,150> ap1(network);
    ap1.apprendre_base(1500,0.1);
    std::cout << "found : " << ap1.evaluer() <<"/150" << '\n';
    std::cout << "==== END : IRIS ====" << '\n';

    std::cout << "=====  Launch of the neural network : IMAGE =====" << '\n';
    NN1 *network2 = new NN1(784, 10, new Sigmoide());
    Apprentissage<Image,60> ap2(network);
    ap2.apprendre_base(1000,1);
    std::cout << "found : " << ap2.evaluer() <<"/60000" << '\n';
    std::cout << "==== END : IMAGE ====" << '\n';
	

}
