//Made by @Magform
//It's not about the gold, it's about the glorys
#ifndef Maze_hpp
#define Maze_hpp

using namespace std;

void Maze::fileToMaze(string fileToOpen){
    fstream file;
    file.open(fileToOpen,  ios::in);
    for(int i=0; i<9; i++){
        for(int n=0; n<9; n++){
            char car;
            car = file.get();
            if(car == '\n'){
                n--;
            }else if(car == ' '){
                maze[i][n] = 1;
            }else if(car == '*'){
                maze[i][n] = 0;
            }else if(car == 'S'){
                maze[i][n] = 3;
                xPos = n;
                yPos = i;
            }else if(car == 'E'){
                maze[i][n] = 2;
            }
        }
    }
}

ostream& operator<<(ostream& os, const Maze toPrint){
    for(int i=0; i<9; i++){
        for(int n=0; n<9; n++){
            os<<toPrint.maze[i][n]<<" ";
        }
        os<<endl;
    }
    return os;
};
int Maze::getXPos() const{
    return xPos;
}
int Maze::getYPos() const{
    return yPos;
}

bool Maze::test(int x, int y) const{
    if(x<=8 && y<=8 && x>=0 && y>=0){
        if(maze[y][x]!=0){
            return true;
        }
    }
    return false;
}

#endif //Maze_hpp
