#ifndef NeurenalNetworkInputIntermediaire
#define NeurenalNetworkInputIntermediaire

#include <Input.h>
#include <vector>

class Input_intermediaire : public Input{
private:
    std::vector<double> values;
    char Label;
public:
    Input_intermediaire(char);
    void add (double);
    double operator[](int);
    char get_label();
    void set_label(char);
};

#endif