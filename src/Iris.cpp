#include "Iris.h"
#include <fstream>
#include <iostream>
using namespace std; 

Iris::Iris(int i){
    string data;
    ifstream file ("../data/iris_training/iris"+to_string(i));
    int index = 0;
    if (file.is_open()){
        while ( getline (file, data, ',') ){
            if(index < 4){
                m_description[index] = stof(data);
                index = index + 1;
            }else{
                if(data.compare("Iris-setosa") == 0) set_label('0');     
                if(data.compare("Iris-virginica") == 0) set_label('1');
                if(data.compare("Iris-versicolor") == 0) set_label('2');
            }   
        }
        file.close();
    } else cout << "Unable to open file"; 
}

void Input::set_label(char i) {
    Label = i;
}

char Input::get_label(){
    return Label;
}

double Iris::operator[](int i){
    return m_description[i];
}

int main(int argc, char *argv[])
{
    Iris test = Iris(2);
    cout << test[1] <<'\n';
    cout << test.get_label() << '\n';
    return 0;
}
