//Made by @Magform
//It's not about the gold, it's about the glory

#include <iostream>
#include <vector>
using namespace std;

void print(string outputName, vector<int> toPrint);
vector<int> fibonacci(int x, int y, vector<int> v, int n);


int main(){
	vector<int> testVector;
	string testString = "Fibonacci output";
	fibonacci(1, 2, testVector, 100000000 );
	return 0;
}


void print(string outputName, vector<int> toPrint){
        cout<<outputName<<" { ";
        for(int i=0; i<toPrint.size(); i++){
                if(toPrint.size()==(i+1)){
                        cout<<toPrint[i]<<"}"<<endl;
                        return;
                }
                cout<<toPrint[i]<<", ";
        }
}

vector<int> fibonacci(int x, int y, vector<int> v, int n){  //fibonacci leggeremente modificata rispetto all'esercizio precendenti per avere un output appena trovato il numero massimo
	for(int i=0; i<n; i++){
		if(i==0){
			v.push_back(x);
		}
		if(i==1){
			v.push_back(y);
		}
		if(i>1){
			int toPush=v[i-1]+v[i-2];
			if(toPush<0){		//controllo se c'e' stato un errore di overflow e quindi prendo il numero precedente come massimo partendo da questi due valori
				cout<<"L'approssimazione al numero massimo in int usando fibonacci e partendo da "<<x<<" e "<<y<<" e' "<<v[i-1]<<endl;
				return v;
			}
			v.push_back(v[i-1]+v[i-2]);
		}
	}
	return v;
}



