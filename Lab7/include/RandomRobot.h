
//Made by @Magform
//It's not about the gold, it's about the glory
#ifndef RandomRobot_h
#define RandomRobot_h
using namespace std;

class RandomRobot : public Robot{
public:
    void move(const Maze& labirinto);
};

#include "../src/RandomRobot.hpp"

#endif // RandomRobot_h

