#include <iostream>
#include "Sigmoide.h"
#include "Tanh.h"
#include "NN1.h"
#include "NN2.h"
#include "Image.h"
#include "Apprentissage.h"
#include "ApprentissageHiddenLayer.h"
#include "Iris.h"



int main(int argc, char *argv[])
{
    std::cout << "=====  Launch of the NN1 : IRIS =====" << '\n';
    NN1 *network1 = new NN1(4, 3, new Sigmoide());
    Apprentissage<Iris,150> ap1(network1);
    ap1.apprendre_base(15000,0.1);
    std::cout << "found : " << ap1.evaluer() <<"/150" << '\n';
    std::cout << "==== END : IRIS ====" << '\n';
    /*
    std::cout << "=====  Launch of the NN1 : IMAGE =====" << '\n';
    NN1 *network2 = new NN1(784, 10, new Sigmoide());
    Apprentissage<Image,60000> ap2(network2);
    ap2.apprendre_base(100000,1);
    std::cout << "found : " << ap2.evaluer() <<"/60000" << '\n';
    std::cout << "==== END : IMAGE ====" << '\n';
    */
    std::cout << "=====  Launch of the NN1 : IRIS =====" << '\n';
    NN2 *network3 = new NN2(4, 3, 3, new Sigmoide());
    ApprentissageHiddenLayer<Iris,NN2,150> ap3(network3);
    ap3.apprendre_base(10000,0.01);
    std::cout << "found : " << ap3.evaluer() <<"/150" << '\n';
    std::cout << "==== END : IRIS ====" << '\n';

}
