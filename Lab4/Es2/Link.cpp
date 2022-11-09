#include <iostream>
#include "Link.h"

void Link::insert(Link* successivo){
    this->succ = successivo;
    if(successivo->prev){
        this->prev=successivo->prev;
        (successivo->prev)->succ = this;
    }
    successivo->prev = this;
}

void Link::add(Link* precedente){
    this->prev = precedente;
    if(precedente->succ){
        this->succ=precedente->succ;
        (precedente->succ)->prev=this;
    }
    precedente->succ = this;
}

void Link::erase(){
    if(this->prev && this->succ){
        (this->prev)->succ = this->succ;
        (this->succ)->prev = this->prev;
    }else if(this->succ){
        (this->succ)->prev = nullptr;
    }else if(this->prev){
        (this->prev)->succ = nullptr;
    }
    this->prev=nullptr;
    this->succ=nullptr;
}

Link* Link::find(std::string toFind){
    Link * checking = this;
    while(checking->prev){
        checking=checking->prev;
    }
    while(true){
        if(checking->value == toFind){
            return checking;
        }
        if(!checking->succ){
            return nullptr;
        }
        checking=checking->succ;
    }
}

//memebr function advance isn't working yet
Link* Link::advance(Link* iniziale, int toSkip){
    if(toSkip>=0){
        while(toSkip--){
            iniziale=iniziale->succ;
        }
    }
    if(toSkip<0){
        while(toSkip++){
            iniziale=iniziale->prev;
        }
    }
    return iniziale;
}

void Link::print_all(){
    Link * checking = this;
    while(checking->prev){
        checking=checking->prev;
    }
    std::cout<<"{";
    while(true){
        std::cout<<checking->value;
        if(!checking->succ){
            std::cout<<"}"<<std::endl;
            return;
        }
        std::cout<<", ";
        checking=checking->succ;
    }
}

//punto 2 esercizio
void Link::push_back(std::string toPush){

}

