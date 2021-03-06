#ifndef NeurenalNetworkImage
#define NeurenalNetworkImage

#include "Input.h"

class Image: public Input{
    private:
        char pixel[784]; // 28*28 pixels pour y accèder grâce à l'indice. 
        char Label;
    public:
        Image(int); // Constructeur prenant en paramètre un entier correspondant à l'indice de l'image
        double operator[](int);  // renvoie le niveau de gris du pixel
        char get_label();
        void set_label(char);
};

#endif