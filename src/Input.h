#ifndef NeurenalNetworkInput
#define NeurenalNetworkInput

class Input{
    private:
        char Label;
    public:
        virtual double operator[](int)=0;
        char get_label();
        void set_label(char);
};

#endif