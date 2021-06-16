#ifndef NeurenalNetworkApprentissage
#define NeurenalNetworkApprentissage

#include "NN1.h"


template<class inputType, int nbInputMax> class Apprentissage {
    private:
        NN1 *network;

    public:
        Apprentissage(NN1 * network){
            this->network=network;
        };
        
        void apprendre_base(int Nbiterations, double rate){
            for(int i = 0; i <Nbiterations ; i++){
                int randIndex = (rand() % nbInputMax);
                inputType input(randIndex);
                network->apprentissage(input, rate);
            }
        };
        
        int evaluer(){
            int cptMatched = 0;
            for (int i = 0; i < nbInputMax; i++) {
                inputType input(i);
                char label = input.get_label();
                if(network->evaluation(input)==label){
                    cptMatched++;
                }
            }
            return cptMatched;
        }; 
};
#endif

