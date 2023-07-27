//#ifndef PLAYER_H
//#define PLAYER_H

#pragma once

class player
{
public:
    player();
    
    void great();

    void CallInput();

    int x,y;

    void colition(int x,int y);

    int lastMoveX, lastMoveY;

private:


protected:

    
};

//#endif