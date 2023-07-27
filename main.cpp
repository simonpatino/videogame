#include  <iostream>

#include "player.cpp"

#include "mapset.cpp"

#include "gamemap.cpp"

using namespace std;

int main(){

player mafalda;

gamemap map;


map.DrawIntro();

bool isGameOver = false;

while(map.isGameOver == false){

    mafalda.CallInput();

    map.setPlayerCell(mafalda.y, mafalda.x);

    if (map.Able == 0)
    {
        mafalda.colition(mafalda.lastMoveX,mafalda.lastMoveY);
    }

    map.draw();

} 


}



