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

    int totalMovement = 0;

    RandomRobot Rbot;
    Rbot.set(maze);
    cout<<"Cerco l'arrivo con RandomRobot"<<endl;
    while(!Rbot.end(maze)){
        totalMovement++;
        Rbot.move(maze);
    }
    cout<<"Robot arrivato, utilizzati "<<totalMovement<<" spostamenti"<<endl;
    totalMovement = 0;

    cout<<"Cerco l'arrivo con RightHandRuleRobot"<<endl;
    RightHandRuleRobot RHbot;
    RHbot.set(maze);
    while(!RHbot.end(maze)){
        totalMovement++;
        RHbot.move(maze);
    }
    cout<<"Robot arrivato, utilizzati "<<totalMovement<<" spostamenti"<<endl;
}
