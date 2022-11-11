//Made by @Magform
//It's not about the gold, it's about the glory
#include <iostream>

using namespace std;

bool is_palindrome(const std::string& s);

int main(){

    cout<<"Test inserendo stringa non palindroma 'testing': "<<is_palindrome("testing")<<endl;
    cout<<"Test inserendo stringa palindroma 'testset': "<<is_palindrome("testset")<<endl;
    cout<<"Test inserendo stringa palindroma 'tesset': "<<is_palindrome("tesset")<<endl;
    cout<<"Test inserendo stringa vuota '': "<<is_palindrome("")<<endl;
}


bool is_palindrome(const std::string& s){
    int lunghezza = s.length();
    for(int i=0; i<lunghezza/2; i++){
        if(s[i]!=s[lunghezza-(i+1)]){return false;}
    }
    return true;
}
