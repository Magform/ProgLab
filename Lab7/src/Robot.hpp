 //Made by @Magform
//It's not about the gold, it's about the glorys
#ifndef Robot_hpp
#define Robot_hpp

using namespace std;

void Robot::set(const Maze& labirinto){
    xPos = labirinto.getXPos();
    yPos = labirinto.getYPos();
}

string Robot::getPos(){
    string out = "x: " + to_string(xPos) + ", y: " + to_string(yPos);
    return out;
}

#endif //Robot_hpp
