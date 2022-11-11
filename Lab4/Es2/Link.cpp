//Made by @Magform
//It's not about the gold, it's about the glory
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


Link* Link::advance(int toSkip){
    Link* checking = this;
    if(toSkip>0){
        while(toSkip--){
            if(checking->succ){
                checking = checking->succ;
            }else{
                return nullptr;
            }
        }
    }else if(toSkip<0){
        while(toSkip++){
            if(checking->prev){
                checking = checking->prev;
            }else{
                return nullptr;
            }
        }
    }
    return checking;
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
    Link* checking = this;
    while(checking->prev)checking=checking->prev;
    Link* toInsert = new Link(toPush, nullptr, checking);
    checking->prev = toInsert;
}

void Link::push_front(std::string toPush){
    Link* checking = this;
    while(checking->succ)checking=checking->succ;
    Link* toInsert = new Link(toPush, checking, nullptr);
    checking->succ = toInsert;
}

std::string Link::pop_back(){
    Link* checking = this;
    while(checking->prev)checking=checking->prev;
    if(checking->succ){
        (checking->succ)->prev = nullptr;
        checking->succ = nullptr;
    }
    return checking->value;
}

std::string Link::pop_front(){
    Link* checking = this;
    while(checking->succ)checking=checking->succ;
    if(checking->prev){
        (checking->prev)->succ = nullptr;
        checking->prev = nullptr;
    }
    return checking->value;
}
