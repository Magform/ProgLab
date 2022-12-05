//Made by @Magform
//It's not about the gold, it's about the glory
#include <iostream>
#include "MyVector.h"
using namespace std;

int main(){
    //eseguiamo tutti i test necessari (per eseuguirli utilizzo quasi sempre le funzioni membro size() e toStringForTesting() che ipotizzo corrette)
    cout<<"creo un vettore v1 di interi con il costruttore di default "<<endl;
    MyVector<double> v1;
    cout<<v1.size()<<endl;
    cout<<v1.toStringForTesting()<<endl;

    cout<<"creo un vettore v2 di double di lunghezza 5 "<<endl;
    MyVector<double> v2(5);
    cout<<v2.size()<<endl;
    cout<<v2.toStringForTesting()<<endl;

    cout<<"creo un vettore v3 di double con 5.0, 3.0, 2.0, 1.0"<<endl;
    MyVector<double> v3{5.0 , 3.0 , 2.0 , 1.0 };
    cout<<v3.size()<<endl;
    cout<<v3.toStringForTesting()<<endl;

    cout<<"creo un vettore v4 uguale a v3"<<endl;
    MyVector<double> v4 = v3;
    cout<<v4.size()<<endl;
    cout<<v4.toStringForTesting()<<endl;

    cout<<"testo l'operatore = assegnando a v1 il vettore v4"<<endl;
    v1 = v4;
    cout<<v1.size()<<endl;
    cout<<v1.toStringForTesting()<<endl;

    cout<<"testo l'operatore = assegnando a v2 il vettore v3"<<endl;
    v2 = v3;
    cout<<v2.size()<<endl;
    cout<<v2.toStringForTesting()<<endl;

    cout<<"testo l'operatore [] visualizzando il 3 elemento di v2"<<endl;
    cout<<v2[3]<<endl;

    cout<<"testo l'operatore [] assegnando 12 al 3 elemento di v2"<<endl;
    v2[3] = 12;
    cout<<v2.toStringForTesting()<<endl;

    cout<<"Creo un vettore v5 vuoto di 4 elementi"<<endl;
    MyVector<double> v5(4);

    cout<<"Testo la funzione push_back aggiungendo 13 a v5"<<endl;
    v5.push_back(13);
    cout<<v5.size()<<endl;
    cout<<v5.toStringForTesting()<<endl;

    cout<<"Testo la funzione push_back aggiungendo 13 a v2"<<endl;
    v2.push_back(13);
    cout<<v2.size()<<endl;
    cout<<v2.toStringForTesting()<<endl;

    cout<<"Testo la funzione pop_back per estrarre l'ultio elemento di v2"<<endl;
    cout<<v2.pop_back()<<endl;
    cout<<v2.size()<<endl;
    cout<<v2.toStringForTesting()<<endl;

    cout<<"Testo la funzione pop_back per estrarre l'ultio elemento di v5"<<endl;
    cout<<v5.pop_back()<<endl;
    cout<<v5.size()<<endl;
    cout<<v5.toStringForTesting()<<endl;

    cout<<"Testo la funzione reserve riservando 10 elementi a v5"<<endl;
    v5.reserve(10);
    cout<<v5.size()<<endl;
    cout<<v5.toStringForTesting()<<endl;

    cout<<"Testo la funzione at visualizzando il 3 elemento di v5"<<endl;
    try{
    cout<<v5.at(3)<<endl;
    }catch(char const* e){
        cout<<e<<endl;
    }

    cout<<"Testo la funzione at visualizzando il 3 elemento di v1"<<endl;
    try{
    cout<<v1.at(3)<<endl;
    }catch(char const* e){
        cout<<e<<endl;
    }

    cout<<"Testo la funzione toString mostrando v1, v2 e v5"<<endl;
    cout<<v1.toString()<<endl;
    cout<<v2.toString()<<endl;
    cout<<v5.toString()<<endl;

    cout<<"Testo overload operator<< stampando v1"<<endl;
    cout<<v1<<endl;

}
