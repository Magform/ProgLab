#include <iostream>
using namespace std;

class MyVector{

private:
    int vectorLength {0};
    double* point = nullptr;

public:
    //costruttori
    MyVector(int length = 0){
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

    MyVector(initializer_list<double> doubleList){
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

    MyVector(const MyVector& inVec){
        vectorLength=inVec.size();
        double* vec = new double[vectorLength];
        point = vec;
        copy(inVec.point, inVec.point+vectorLength, point);
    }

    MyVector(MyVector&& inVec){
        inVec.vectorLength = 0;
        inVec.point = nullptr;
    }

    //distruttore
    ~MyVector(){
        delete[] point;
    }

    //operatori
    MyVector& operator=(const MyVector& inVec){
        double* newVec = new double[inVec.vectorLength];
        copy(inVec.point, inVec.point+inVec.vectorLength, newVec); // copia gli elementi
        delete[] point;
        point = newVec;
        vectorLength = inVec.vectorLength;
        return *this;
    }

    MyVector& operator=(MyVector&& inVec){
        delete[] point;
        point = inVec.point;
        inVec.point = nullptr;
        vectorLength = inVec.vectorLength;
        inVec.vectorLength = 0;
        return *this;
    }

    double operator[](int position) const{
        return point[position];
    }
    double& operator[](int position){
        return point[position];
    }

    //altre funzioni
    void push_back(double value){
        for(int i=0; i<vectorLength; i++){
            if(point[i]==0){
                point[i]=value;
                return;
            }
        }
    }

    int size() const{
        return vectorLength;
    }

    void safe_set(int position, double value){
        if(position>=0 && position<vectorLength){
            point[position]=value;
            return;
        }
        cout<<"errore, questa posizione non esiste"<<endl;
    }

    double safe_get(int position){
        if(position>0 && position<vectorLength){
            return point[position];
        }
        cout<<"errore, questa posizione non esiste"<<endl;
        return 0;
    }
};

int main(){
    MyVector t = MyVector(11);
    cout<<t.size()<<endl;
    t.push_back(12);
    MyVector t2 = MyVector(-24);
    cout<<t2.size()<<endl;
    MyVector t3 = MyVector {1.2, 12.41, 242.32};
    cout<<t3.size()<<endl;
    MyVector t4 = t3;
    cout<<t4.size()<<endl;
    t = t3;
    cout<<t.size()<<endl;
    cout<<t3[2]<<endl;
    cout<<"other test"<<endl;
    t3.safe_set(2, 1314.21);
    cout<<t3.safe_get(2)<<endl;
    cout<<t3.safe_get(10)<<endl;
}
