//Made by @Magform
//It's not about the gold, it's about the glory
#ifndef MyVector_h
#define MyVector_h

#include <iostream>
#include <string>

using namespace std;

template<typename T> class MyVector{

private:
    int maxVector {0};
    int currVector {0};
    T * point = nullptr;

public:
    //costruttori
    MyVector(int length = 0);
    MyVector(initializer_list<T> list);
    MyVector(const MyVector& inVec);
    MyVector(MyVector&& inVec);

    //distruttore
    ~MyVector();

    //operatori
    MyVector& operator=(const MyVector& inVec);
    MyVector& operator=(MyVector&& inVec);
    T operator[](int position) const;
    T& operator[](int position);

    //altre funzioni
    void push_back(T value);
    T pop_back();
    void reserve(int toReserve);
    T & at(int position);
    string toString();
    string toString() const;

    int size() const;
    string toStringForTesting();

    template<typename R>
    friend std::ostream& operator<<(std::ostream& os, const MyVector<R> toPrint);

};

#include "MyVector.hpp"

#endif // MyVector_h
