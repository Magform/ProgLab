#include "Link.h"

using namespace std;

int main(){
    Link elemento1 = Link("elemento1");

    cout<<"Test operatore insert inserendo un elemento0 prima di elemento2"<<endl;
    Link elemento0 = Link("elemento0");
    elemento0.insert(&elemento1);
    elemento0.print_all();

    cout<<"Test operatore add inserendo un elemento5 dopo elemento0"<<endl;
    Link elemento5 = Link("elemento5");
    elemento5.add(&elemento0);
    elemento0.print_all();

    cout<<"Test operatore erase eliminando elemento5"<<endl;
    elemento5.erase();
    elemento0.print_all();

    cout<<"Test operatore erase eliminando elemento1"<<endl;
    elemento1.erase();
    elemento0.print_all();

    cout<<"Aggiungo elemento1 ed elemento2 dopo elemento0"<<endl;
    Link elemento2 = Link("elemento2");
    elemento0.insert(&elemento1);
    elemento1.insert(&elemento2);
    elemento0.print_all();

    cout<<"Test funzione membro find per cercare elemento0"<<endl;
    cout<<elemento0.find("elemento0")<<endl;
    cout<<"Test funzione membro find per cercare elemento2"<<endl;
    cout<<elemento0.find("elemento2")<<endl;
    cout<<"Test funzione membro find per cercare elemento3"<<endl;
    cout<<elemento0.find("elemento3")<<endl;

    return 0;
}
