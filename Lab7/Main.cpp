#include <iostream>
#include <fstream>
#include <stdlib.h>
#include "include/Maze.h"
#include "include/Robot.h"
#include "include/RandomRobot.h"
#include "include/RightHandRuleRobot.h"

int main(){
    Maze maze;
    maze.fileToMaze("toRead");
    cout<<maze;

    RandomRobot Rbot;
    Rbot.set(maze);
    cout<<"10 spostamenti con RandomRobot"<<endl;
    for(int i=0; i<10; i++){
        cout<<Rbot.getPos()<<endl;
        Rbot.move(maze);
    }

    cout<<"10 spostamenti con RightHandRuleRobot"<<endl;
    RightHandRuleRobot RHbot;
    RHbot.set(maze);
    for(int i=0; i<10; i++){
        cout<<RHbot.getPos()<<endl;
        RHbot.move(maze);
    }
}
