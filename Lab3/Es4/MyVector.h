//Made by @Magform
//It's not about the gold, it's about the glory
#include <iostream>
#include <string>
using namespace std;

class MyVector{

private:
    int vectorLength {0};
    double* point = nullptr;

public:
    //costruttori
    MyVector(int length);
    MyVector(initializer_list<double> doubleList);
    MyVector(const MyVector& inVec);
    MyVector(MyVector&& inVec);

    //distruttore
    ~MyVector();

    //operatori
    MyVector& operator=(const MyVector& inVec);
    MyVector& operator=(MyVector&& inVec);
    double operator[](int position) const;
    double& operator[](int position);

    //altre funzioni
    void push_back(double value);
    int size() const;
    void safe_set(int position, double value);
    double safe_get(int position);
    string toString();
};
