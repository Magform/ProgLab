 
//Made by @Magform
//It's not about the gold, it's about the glory
#ifndef Robot_h
#define Robot_h
using namespace std;

class Robot{
protected:
    int xPos = 0;
    int yPos = 0;
public:
    void set(const Maze& labirinto);
    virtual void move(const Maze& labirinto){}
    string getPos();
    bool end(const Maze& labirinto);
};

#include "../src/Robot.hpp"

#endif // Robot_h
