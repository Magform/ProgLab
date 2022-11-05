//Made by @Magform
//It's not about the gold, it's about the glory

#include <iostream>
using namespace std;

void f();
void f_illegal();

int main(){
    f();
    f_illegal();
    return 0;
}


void f(){
    int array[10];
    int *pointer = &array[3];
    int dato = 0;
    for(int i=-3; i<7; i++){
        pointer[i]=dato;
        dato++;
        cout<<pointer[i]<<" ";
    }
    cout<<endl;
}

void f_illegal(){
    int array[10];
    int *pointer = &array[3];
    int dato = 0;
    for(int i=-3; i<100000; i++){
    //errore "*** stack smashing detected ***: terminated"  con valore fuori dal limite ma non troppo alto (minore di 1248), errore "Segmentation fault (core dumped)" con valore maggiore grande ossia maggiore di 1248.
    //E` probabile che i due errori siano diversi in quanto nel secondo caso il programma tenta di accedere a memoria adibita ad un altro programma mentre nel primo accede sempre a zone dedicate a lui.
        pointer[i]=dato;
        dato++;
        cout<<pointer[i]<<" ";
    }
    cout<<endl;
}
