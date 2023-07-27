#include "player.h"

#include <iostream>

player::player()
{
    x = 1;
    y = 1;
    lastMoveX, lastMoveY = 0,0; 
}

void player::great(){

    std::cout << x << "," << y << std::endl;

}

void player::CallInput(){

    char UserInput = ' ';

    std::cin >> UserInput;

    lastMoveX = x;
    lastMoveY = y;

    switch (UserInput)
    {
    case 'w':
        y --;
        break;
    
    case 'a':
        x --;
        break;

    case 's':
        y ++;
        break;

    case 'd':
        x ++; 
        break;

    default:

        std::cout << "What are you trying to do!?" << std::endl;
        break;
    }


}
 
void player::colition(int lastMoveX, int lastMoveY){

    x = lastMoveX;
    y = lastMoveY;

}