#pragma once

#include "mapset.h"

class gamemap
{
public:

    gamemap();

    mapset*  PlayerCell;

    mapset cell[10][15];

    void draw();

    void setPlayerCell(int x, int y);

    void loadMapFromFile();

    int lastMoveX, lastMoveY;

    int Able;

    void DrawIntro();

    void DrawFinal();

    bool isGameOver;

    
    
private:

};

