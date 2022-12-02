//Made by @Magform
//It's not about the gold, it's about the glorys
#ifndef MyVector_hpp
#define MyVector_hpp


#include <iostream>
#include <string>
#include "MyVector.h"
using namespace std;

//Ho deciso di preferire risparmiare memoria piuttosto che operazioni quindi i vector utilizzeranno sempre la quantita minima di memoria possibile


//costruttori
template<typename T>
MyVector<T>::MyVector(int length){
    if(length<=0){
        maxVector = 0;
        currVector = 0;
        point = nullptr;
    }else{
        maxVector = length;
        currVector = 0;
        T * vec = new T[maxVector];
        point = vec;
    }
    for(int i=0; i<length; i++){
        point[i] = 0;
    }
}

template<typename T>
MyVector<T>::MyVector(initializer_list<T> list){
    if(list.size()<=0){
        maxVector=0;
        currVector=0;
        point = nullptr;
    }else{
        maxVector = list.size();
        currVector = list.size();
        T * vec = new T[maxVector];
        point = vec;
    }
    copy(list.begin(), list.end(), point);
}

template<typename T>
MyVector<T>::MyVector(const MyVector& inVec){
    maxVector=inVec.maxVector;
    currVector=inVec.currVector;
    T * vec = new T[maxVector];
    point = vec;
    copy(inVec.point, inVec.point+maxVector, point);
}

template<typename T>
MyVector<T>::MyVector(MyVector&& inVec){
    inVec.maxVector = 0;
    inVec.currVector = 0;
    inVec.point = nullptr;
    }

//distruttore
template<typename T>
MyVector<T>::~MyVector(){
    delete[] point;
}

//operatori
template<typename T>
MyVector<T>& MyVector<T>::operator=(const MyVector& inVec){
    if(this->maxVector<inVec.maxVector){
        T * newVec = new T[inVec.maxVector];
        copy(inVec.point, inVec.point+inVec.maxVector, newVec); // copia gli elementi
        delete[] point;
        point = newVec;
        currVector = inVec.currVector;
        maxVector = inVec.maxVector;
    }else{
        copy(inVec.point, inVec.point+inVec.maxVector, this->point);
          //Lascio una zona in memoria con dei dati ma non sono piu puntati da nulla, per evitare di andare a ricreaare un nuovo vettore ogni volta. Se si preferisce il contrario decommentare il costruttore analogo qui sotto e commentare questo.
        currVector = inVec.currVector;
        maxVector = inVec.maxVector;
    }
    return *this;
}

/*
template<typename T>
MyVector<T>& MyVector<T>::operator=(const MyVector& inVec){
    T * newVec = new T[inVec.maxVector];
    copy(inVec.point, inVec.point+inVec.maxVector, newVec); // copia gli elementi
    delete[] point;
    point = newVec;
    currVector = inVec.currVector;
    maxVector = inVec.maxVector;
    maxVector = inVec.maxVector;
    return *this;
}*/

template<typename T>
MyVector<T>& MyVector<T>::operator=(MyVector&& inVec){
    delete[] point;
    point = inVec.point;
    inVec.point = nullptr;
    maxVector = inVec.maxVector;
    currVector = inVec.currVector;
    inVec.maxVector = 0;
    inVec.currVector = 0;
    return *this;
}

template<typename T>
T MyVector<T>::operator[](int position) const{
    return point[position];
}

template<typename T>
T& MyVector<T>::operator[](int position){
    return point[position];
}

//altre funzioni
template<typename T>
void MyVector<T>::push_back(T value){
    if(currVector+1<maxVector){
        point[currVector] = value;
        currVector++;
    }else{
        maxVector = maxVector+1;
        T * vec = new T[maxVector];
        copy(point, point+maxVector-1, vec);
        delete[] point;
        point = vec;
        point[currVector] = value;
        currVector = currVector+1;
    }
}

//ho deciso che non vado a rimpicciolire l'array ogni pop_back
template<typename T>
T MyVector<T>::pop_back(){
    if(currVector==0){
        throw "no_element_exception";
    }else{
        currVector= currVector-1;
        T to_exit = point[currVector];
        point[currVector] = 0;
        return to_exit;
    }
}

template<typename T>
int MyVector<T>::size() const{
    return maxVector;
}

template<typename T>
void MyVector<T>::reserve(int toReserve){
    if(toReserve>maxVector){
        T * vec = new T[toReserve];
        copy(point, point+maxVector, vec);
        delete[] point;
        point = vec;
        maxVector = toReserve;
    }
}

template<typename T>
T & MyVector<T>::at(int position){
    if(position>=0 && position<currVector){
        return point[position];
    }else{
        throw "out_of_bounds_index_exception";
    }
}

template<typename T>
string MyVector<T>::toStringForTesting(){
    string out {};
    out += "{";
    for(int i=0; i<maxVector; i++){
        out += to_string(point[i]);
        out += " ";
    }
    out += "}";
    return out;
}

template<typename T>
string MyVector<T>::toString(){
    string out {};
    out += "{";
    for(int i=0; i<currVector; i++){
        out += to_string(point[i]);
        out += " ";
    }
    out += "}";
    return out;
}

#endif //MyVector_hpp
