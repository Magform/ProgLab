#include <iostream>

class Link{
private:
    Link* prev;
    Link* succ;
    std::string value;

public:
    //costruttore
    Link(const std::string& v, Link* p = nullptr, Link* s = nullptr){
        value = v;
        succ = s;
        prev = p;
    }

    //punto 1 esercizio
    void insert(Link* successivo);
    void add(Link* precedente);
    void erase();
    Link* find(std::string toFind);
    Link* advance(Link* iniziale, int toSkip); //toFix
    void print_all();

    //punto 2 esercizio (da fare)
    void push_back(std::string toPush);
    void push_front(std::string toPush);

    //punto 3 esercizio (da fare)
    std::string pop_back();
    std::string pop_front();


};
