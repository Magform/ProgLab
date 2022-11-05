//Made by @Magform
//It's not about the gold, it's about the glory
#include <iostream>
#include "MyVector.h"
using namespace std;

int main(){
    //eseguiamo tutti i test necessari (per eseuguirli utilizzo quasi sempre le funzioni membro size() e toString() che ipotizzo corrette)
    cout<<"Testing costruttore con argomento int = 13"<<endl;
    MyVector v1=MyVector(13);
    cout<<"Dimensione: "<<v1.size()<<endl;
    cout<<"Contenuto: "<<v1.toString()<<endl;
    cout<<"Testing costruttore con argomento initializer_list<double> = 12.3, 15, 129.8193, 111.111, 1, 0, -1"<<endl;
    MyVector v2=MyVector {12.3, 15, 129.8193, 111.111, 1, 0, -1};
    cout<<"Dimensione: "<<v2.size()<<endl;
    cout<<"Contenuto: "<<v2.toString()<<endl;
    cout<<"Testing costruttore con argomento il MyVec n.2"<<endl;
    MyVector v3=v2;
    cout<<"Dimensione: "<<v2.size()<<endl;
    cout<<"Contenuto: "<<v2.toString()<<endl;
    cout<<"Testing operatore = assegnando al vettore n.1 il vettore n.3"<<endl;
    v1=v3;
    cout<<"Dimensione: "<<v1.size()<<endl;
    cout<<"Contenuto: "<<v1.toString()<<endl;
    cout<<"Test operator [] visualizzando il terzo elemento del vettore n.3"<<endl;
    cout<<v3[3]<<endl;
    cout<<"Contenuto: "<<v3.toString()<<endl;
    cout<<"Test operator [] assegnando 5 al terzo elemento del vettore n.3"<<endl;
    v3[3]=5;
    cout<<"Contenuto: "<<v3.toString()<<endl;
    cout<<"Test push_back creando un vettore vuoto di 10 elementi e aggiungendo 5 al vettore"<<endl;
    MyVector v4(10);
    v4.push_back(5);
    cout<<"Contenuto: "<<v4.toString()<<endl;
    cout<<"Test safe_set settando il valore numero 1 dell'vettore 4 a 12"<<endl;
    v4.safe_set(1, 12);
    cout<<"Contenuto: "<<v4.toString()<<endl;
    cout<<"Test safe_set settando il ventesimo valore dell'vettore 4 a 12"<<endl;
    v4.safe_set(20, 12);
    cout<<"Contenuto: "<<v4.toString()<<endl;
    cout<<"Test safe_get ottenendo il valore n.1 dell vettore 4"<<endl;
    cout<<v4.safe_get(1)<<endl;
    cout<<"Contenuto: "<<v4.toString()<<endl;
    cout<<"Test safe_get ottenendo il valore n.20 dell vettore 4"<<endl;
    cout<<v4.safe_get(20)<<endl;
    cout<<"Contenuto: "<<v4.toString()<<endl;
}
