#include <iostream>
using namespace std;

const int arrayDim = 13;

void print_array_lenght(double* arr);
void print_array_lenght2(const double arr[]&);

int main(){

    double array[arrayDim] {0,1,2,3,4,5,6,7,8,9,10,11,12};
    cout<<"Dimensione: "<<sizeof(array)<<endl;
    print_array_lenght(array);
    print_array_lenght2(array);
    return 0;
}

void print_array_lenght(double* arr){
    cout<<"Dimensione dalla funzione: "<<sizeof(arr)<<endl; //il valore stampato da qui e' solo il primo elemento dell'array in quanto passandolo cosi viene passato il riferimento ad un double e la nostra funzione non e' a conoscenza del fatto che esso sia il primo di un array di 13 elementi
    cout<<"Accesso elementi: "; //Riesce pero', se richiesto in modo esplicio ad accedere agli elementi di qui non conosce l'esistenza questo potrebbe essere un richio per la sicurezza dei dati cosi salvati permettendo l'accesso anche dove non dovrebbe essere possibile
    for(int i=0; i<13; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void print_array_lenght2(const double arr[]){
    cout<<"Dimensione dalla funzione: "<<sizeof(arr)<<endl;
    cout<<"Accesso elementi: ";
    for(int i=0; i<13; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
