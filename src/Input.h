#ifndef NeurenalNetworkInput
#define NeurenalNetworkInput

class Input{
    private:
        char Label;
    public:
        virtual double operator[](int)=0;
        virtual char get_label()=0;
        void set_label(char);
};

#endif