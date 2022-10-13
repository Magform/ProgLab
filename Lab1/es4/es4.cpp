//Made by @Magform
//It's not about the gold, it's about the glory


#include <iostream>
#include <vector>
using namespace std;

void print(string outputName, vector<int> toPrint);
vector<int> fibonacci(int x, int y, vector<int> v, int n);


int main(){
	vector<int> testVector;					//creating some variable for testing
	string testString = "Testing fibonacci output";
	print(testString, fibonacci(1, 2, testVector, 7));
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

vector<int> fibonacci(int x, int y, vector<int> v, int n){
	for(int i=0; i<n; i++){
		if(i==0){
			v.push_back(x);
		}
		if(i==1){
			v.push_back(y);
		}
		if(i>1){
			v.push_back(v[i-1]+v[i-2]);
		}
	}
	return v;
}
