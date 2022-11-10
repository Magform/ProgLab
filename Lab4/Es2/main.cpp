#include "Link.h"

using namespace std;

int main(){
    Link elemento1 = Link("elemento1");

    cout<<"Test operatore insert inserendo un elemento0 prima di elemento1"<<endl;
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

    cout<<"Test funzione membro advance da elemento1 aggiungendo 1"<<endl;
    cout<<elemento1.advance(1)<<endl;
    cout<<"Test funzione membro advance da elemento1 aggiungendo 2"<<endl;
    cout<<elemento1.advance(2)<<endl;
    cout<<"Test funzione membro advance da elemento1 aggiungendo 0"<<endl;
    cout<<elemento1.advance(0)<<endl;
    cout<<"Test funzione membro advance da elemento1 rimuovendo 1"<<endl;
    cout<<elemento1.advance(-1)<<endl;
    cout<<"Test funzione membro advance da elemento1 rimuovendo 2"<<endl;
    cout<<elemento1.advance(-2)<<endl;

    cout<<"Test funzione membro push_back aggiungendo elemento-1"<<endl;
    elemento2.push_back("elemento-1");
    elemento0.print_all();

    cout<<"Test funzione membro push_front aggiungendo elemento3"<<endl;
    elemento1.push_front("elemento3");
    elemento0.print_all();

    cout<<"Test funzione membro pop_back"<<endl;
    cout<<elemento1.pop_back()<<endl;
    elemento0.print_all();

    cout<<"Test funzione membro pop_front"<<endl;
    cout<<elemento1.pop_front()<<endl;
    elemento0.print_all();

    cout<<"Testing completato con successo "<<endl;
    return 0;
}
