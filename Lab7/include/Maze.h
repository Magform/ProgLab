//Made by @Magform
//It's not about the gold, it's about the glory
#ifndef Maze_h
#define Maze_h
using namespace std;

class Maze{
private:
    int maze[9][9]; //0 non si puo andare
                    //1 si puo andare
                    //2 inizio
                    //3 fine
    int xPos = 0;
    int yPos = 0;
public:
    int getXPos() const;
    int getYPos() const;
    int get(int y, int x) const;
    void fileToMaze(string fileToOpen);
    bool test(int x, int y) const;
    friend ostream& operator<<(ostream& os, const Maze toPrint);
};

#include "../src/Maze.hpp"

#endif // Maze_h
