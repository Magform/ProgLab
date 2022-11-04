#include <iostream>
#include <string>
#include "MyVector.h"
using namespace std;


//costruttori
MyVector::MyVector(int length = 0){
    if(length<=0){
        vectorLength=0;
        point = nullptr;
    }else{
        vectorLength=length;
        double* vec = new double[vectorLength];
        point = vec;
    }
    for(int i=0; i<vectorLength; i++){
        point[i] = 0;
    }
}

MyVector::MyVector(initializer_list<double> doubleList){
    if(doubleList.size()<=0){
        vectorLength=0;
        point = nullptr;
    }else{
        vectorLength=doubleList.size();
        double* vec = new double[vectorLength];
        point = vec;
    }
    copy(doubleList.begin(), doubleList.end(), point);
}

MyVector::MyVector(const MyVector& inVec){
    vectorLength=inVec.size();
    double* vec = new double[vectorLength];
    point = vec;
    copy(inVec.point, inVec.point+vectorLength, point);
}

MyVector::MyVector(MyVector&& inVec){
    inVec.vectorLength = 0;
    inVec.point = nullptr;
}

//distruttore
MyVector::~MyVector(){
    delete[] point;
}

//operatori
MyVector& MyVector::operator=(const MyVector& inVec){
    double* newVec = new double[inVec.vectorLength];
    copy(inVec.point, inVec.point+inVec.vectorLength, newVec); // copia gli elementi
    delete[] point;
    point = newVec;
    vectorLength = inVec.vectorLength;
    return *this;
}

MyVector& MyVector::operator=(MyVector&& inVec){
    delete[] point;
    point = inVec.point;
    inVec.point = nullptr;
    vectorLength = inVec.vectorLength;
    inVec.vectorLength = 0;
    return *this;
}

double MyVector::operator[](int position) const{
    return point[position];
}

double& MyVector::operator[](int position){
    return point[position];
}

//altre funzioni
void MyVector::push_back(double value){
    for(int i=0; i<vectorLength; i++){
        if(point[i]==0){
            point[i]=value;
            return;
        }
    }
}

int MyVector::size() const{
    return vectorLength;
}

void MyVector::safe_set(int position, double value){
    if(position>=0 && position<vectorLength){
        point[position]=value;
        return;
    }
    cout<<"errore, questa posizione non esiste"<<endl;
}

double MyVector::safe_get(int position){
    if(position>0 && position<vectorLength){
        return point[position];
    }
    cout<<"errore, questa posizione non esiste"<<endl;
    return 0;
}

string MyVector::toString(){
    string out {};
    out += "{";
    for(int i=0; i<vectorLength; i++){
        out += to_string(point[i]);
        out += " ";
    }
    out += "}";
    return out;
}
