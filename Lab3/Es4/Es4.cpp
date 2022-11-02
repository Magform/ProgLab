#include <iostream>
using namespace std;

class MyVector{

private:
    int vectorLenght {0};
    double* point;

public:
    MyVector(int lenght){
        vectorLenght=lenght;
        double array[lenght];
        point = array;
    }

    int size() const{
        return vectorLenght;
    }
    //~MyVector();

    void safe_set(double value);
    double safe_get(int position);
    double operator[](int position) const;
    double operator[](int position);

};

int main(){
    MyVector t = MyVector(12);
}
