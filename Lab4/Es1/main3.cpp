#include <iostream>
#include <string>
using namespace std;

bool is_palindrome(const char* first, const char* last);

int main(){

    string tmp = "testing";
    char *testing = &tmp[0];
    cout<<"Test inserendo stringa non palindroma 'testing': "<<is_palindrome(testing, testing+6)<<endl;
    tmp = "testset";
    char* testset = &tmp[0];
    cout<<"Test inserendo stringa palindroma 'testset': "<<is_palindrome(testset, testset+6)<<endl;
    tmp = "tesset";
    char* tesset = &tmp[0];
    cout<<"Test inserendo stringa palindroma 'tesset': "<<is_palindrome(tesset, tesset+5)<<endl;
    tmp="";
    char* null = &tmp[0];
    cout<<"Test inserendo stringa vuota '': "<<is_palindrome(null, null+0)<<endl;
}


bool is_palindrome(const char* first, const char* last){
    int i=0;
    while(first[i]!='\0'){
        if(first[i]!=last[-i]){return false;}
        i++;
    }
    return true;
}
