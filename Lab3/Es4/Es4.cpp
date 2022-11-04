#include <iostream>
#include "MyVector.h"
using namespace std;


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
