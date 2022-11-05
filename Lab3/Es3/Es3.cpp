//Made by @Magform
//It's not about the gold, it's about the glory
#include <iostream>
using namespace std;


void print_reference(const int &reference);
void print_reference(const double &reference);

void print_pointer(int * pointer);
void print_pointer(double * pointer);

int main(){
    int vInt {12};
    double vDouble {3.15};

    print_reference(vInt);
    print_pointer(&vInt);
    print_reference(vDouble);
    print_pointer(&vDouble);

    return 0;
}

void print_reference(const int &reference){
    cout<<"int per const reference: "<<reference<<endl;
}

void print_reference(const double &reference){
    cout<<"double per const reference: "<<reference<<endl;
}

void print_pointer(int * pointer){
    cout<<"int per pointer: "<<pointer<<endl;
}

void print_pointer(double * pointer){
    cout<<"double per pointer: "<<pointer<<endl;
}


