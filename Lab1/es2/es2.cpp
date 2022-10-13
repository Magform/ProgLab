//Made by @Magform
//It's not about the gold, it's about the glory

#include <iostream>

int d {10}; //riga n.4 --> +4 data, +4 dec
int e;//riga n.5 --> +4 bss, +4 dec

int main()
{
	int a; //riga n.1
	static int b {17}; //riga n.2 --> +4 data, +4 dec	
	static int c;      //riga n.3 --> +7 bss, +7 dec
	return 0;
}
/*
in quale delle sezioni riportate da size compare la variabile locale automatica?
bss
perché la variabile locale automatica è “automatica”?
Non viene inizializzata ad un valore dall'utente ma la gestisce il compilatore inizializzandola a 0
cosa succede togliendo l’inizializzazione alle variabili statiche? Perché?
Vengono inizializzate di default a 0 e non sara' possibile modificarle, viene fatto cio' perche altrimenti avremo un errore ogni volta che utilizziamo suddetta variabile.
Qual è lo scope di ciascuna delle variabili create?
Lo scope di {a,b,c} e' la funzione main, mentre lo scope di {d,e} e' lo scope globale
*/
