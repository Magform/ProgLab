//Made by @Magform
//It's not about the gold, it's about the glory
#include <iostream>

using namespace std;

bool is_palindrome(const char s[], int length);

int main(){

    char testing[] = "testing";
    cout<<"Test inserendo stringa non palindroma 'testing': "<<is_palindrome(testing, 6)<<endl;
    char testset[] = "testset";
    cout<<"Test inserendo stringa palindroma 'testset': "<<is_palindrome(testset, 6)<<endl;
    char tesset[] = "tesset";
    cout<<"Test inserendo stringa palindroma 'tesset': "<<is_palindrome(tesset, 5)<<endl;
    char null[] = "";
    cout<<"Test inserendo stringa vuota '': "<<is_palindrome(null, 0)<<endl;
}


bool is_palindrome(const char s[], int length){
    for(int i=0; i<length/2; i++){
        if(s[i]!=s[length-(i)]){return false;}
    }
    return true;
}
