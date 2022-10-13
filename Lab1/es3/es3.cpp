//Made by @Magform
//It's not about the gold, it's about the glory

#include <iostream>
#include <vector>
using namespace std;

void print(string outputName, vector<int> toPrint);

int main(){
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
