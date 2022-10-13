//Made by @Magform
//It's not about the gold, it's about the glory

#include <iostream>
using namespace std;

void call_counter(void);


int numeroChiamateCallCounter {0}; //attenzione che e' una variabile global

int main(){
	//call_counter();   //eventuale testing
	//call_counter();   //eventuale testing
	return 0;
}

void call_counter(void){
	numeroChiamateCallCounter++;			//WARNING: Variabile global
	cout<<numeroChiamateCallCounter<<endl;		//WARNING: Variabile global
}


