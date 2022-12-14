 //Made by @Magform
//It's not about the gold, it's about the glorys
#ifndef RandomRobot_hpp
#define RandomRobot_hpp

using namespace std;
void RandomRobot::move(const Maze& labirinto){
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
#endif //RandomRobot_hpp
