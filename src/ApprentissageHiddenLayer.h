#ifndef NeurenalNetworkApprentissageHiddenLayer
#define NeurenalNetworkApprentissageHiddenLayer

#include <vector>

template <class inputType, class networkType, int nbInputMax> class ApprentissageHiddenLayer{
public:
    ApprentissageHiddenLayer(networkType * network){
        this->network = network;
    }

    void apprendre_base(int nbIterations, double rate){
        for (int i = 0; i < nbIterations; i++){
            int index = (rand() % nbInputMax);
            inputType input(index);
            network->apprentissage(input, rate);
        }
    }

    int evaluer(){
        int cptMatched = 0;
        for (int i; i < nbInputMax; i++){
            std::pair<std::vector<double>, char> formated_input;
            
            inputType input(i);
            char label = input.get_label();
            if (label == network->evaluation(input))
                cptMatched += 1;
        }
        return cptMatched;
    }

private:
    networkType *network;
};

#endif