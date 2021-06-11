#ifndef NeurenalNetworkApprentissage
#define NeurenalNetworkApprentissage

#include "NN1.h"


template<class inputType, int nbInputMax> class Apprentissage {
    private:
        NN1 *network;

    public:
        Apprentissage(NN1 *);
        void apprendre_base(int, double);
        int evaluer(); 
};
#endif

