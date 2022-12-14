 
 //Made by @Magform
//It's not about the gold, it's about the glorys
#ifndef RightHandRuleRobot_hpp
#define RightHandRuleRobot_hpp

using namespace std;
void Rmove(const Maze& labirinto, int xPos, int yPos);

void RightHandRuleRobot::move(const Maze& labirinto){
    if(!labirinto.test(xPos-1, yPos-1) && labirinto.test(xPos-1, yPos)){
            xPos = xPos-1;
            return;
    }
    if(!labirinto.test(xPos, yPos-1) && labirinto.test(xPos-1, yPos-1)){
            xPos = xPos-1;
            yPos = yPos-1;
            return;
    }
    if(!labirinto.test(xPos+1, yPos-1) && labirinto.test(xPos, yPos-1)){
            yPos = yPos-1;
            return;
    }
    if(!labirinto.test(xPos+1, yPos) && labirinto.test(xPos+1, yPos-1)){
            xPos = xPos+1;
            yPos = yPos-1;
            return;
    }
    if(!labirinto.test(xPos+1, yPos+1) && labirinto.test(xPos+1, yPos)){
            xPos = xPos+1;
            return;
    }
    if(!labirinto.test(xPos, yPos+1) && labirinto.test(xPos+1, yPos+1)){
            xPos = xPos+1;
            yPos = yPos+1;
            return;
    }
    if(!labirinto.test(xPos-1, yPos+1) && labirinto.test(xPos, yPos+1)){
            yPos = yPos+1;
            return;
    }
    if(!labirinto.test(xPos-1, yPos) && labirinto.test(xPos-1, yPos+1)){
            xPos = xPos-1;
            yPos = yPos+1;
            return;
    }
    Rmove(labirinto, xPos, yPos);
}

//creo una funzione che fa spostare il bot a caso in caso non ci siano pareti attorno a lui

void Rmove(const Maze& labirinto, int xPos, int yPos){
    srand(1232);
    bool bad = true;
    while(bad){
        int location = rand()%8+1;
        switch(location){
            case 1:
                if(labirinto.test(xPos-1, yPos-1)){
                    bad = false;
                    xPos = xPos-1;
                    yPos = yPos-1;
                }
                break;
            case 2:
                if(labirinto.test(xPos, yPos-1)){
                    bad = false;
                    yPos = yPos-1;
                }
                break;
            case 3:
                if(labirinto.test(xPos+1, yPos-1)){
                    bad = false;
                    yPos = yPos-1;
                    xPos = xPos+1;
                }
                break;
            case 4:
                if(labirinto.test(xPos-1, yPos)){
                    bad = false;
                    xPos = xPos-1;
                }
                break;
            case 5:
                if(labirinto.test(xPos+1, yPos)){
                    bad = false;
                    xPos = xPos+1;
                }
                break;
            case 6:
                if(labirinto.test(xPos-1, yPos+1)){
                    bad = false;
                    yPos = yPos+1;
                    xPos = xPos-1;
                }
                break;
            case 7:
                if(labirinto.test(xPos, yPos+1)){
                    bad = false;
                    yPos = yPos+1;
                }
                break;
            case 8:
                if(labirinto.test(xPos+1, yPos+1)){
                    bad = false;
                    yPos = yPos+1;
                    xPos = xPos+1;
                }
                break;
        }
    }
}


#endif //RightHandRuleRobot_hpp
