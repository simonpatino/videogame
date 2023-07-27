#include "gamemap.h"
#include <iostream>
#include <fstream>
#include <ostream>
//#include <string>
using namespace std;

gamemap::gamemap()
{

PlayerCell = NULL;

loadMapFromFile();

Able = 1;

isGameOver = false;

}

void  gamemap::draw()
{

 for (int i = 0; i < 10; i ++){

    for (int p = 0; p < 15; p++){

        std::cout << cell[i][p].id;

    }

    std::cout << std::endl;

 }

}

void gamemap::setPlayerCell(int x, int y)
{   

    if (cell[x][y].blocked()== false)
    {   

        if (cell[x][y].id == 'X')

        {

            DrawFinal();

            isGameOver = true;               
        }

        else
        {
            if (PlayerCell != NULL){

            PlayerCell->id = ' ';
            }
        

            PlayerCell =&cell[x][y] ;

            PlayerCell->id = '3';

            Able =1;

        }
        

    }

    else
    {     

    Able =0;       

    }

    
    
}

void gamemap::loadMapFromFile()
{

   // ofstream fileCreated("map.txt");


    string line;

    int row =0;

    ifstream myFile("map.txt");

    if(myFile.is_open())
    {

        while( getline (myFile,line))
        {

            for(int p=0; p< line.length(); p++)
            {
                if (line[p]== '0')
                    cell[row][p].id = ' ';

                
                else {

                    cell[row][p].id = line[p];
                }
            }
            row++;
        }

    }

    else{

        std::cout << "FATAL ERROR" << std::endl;
    }

}


void gamemap::DrawIntro()
{

    string line;

    int row =0;

    ifstream myFile("intro.txt");

    if(myFile.is_open())
    {

        while( getline (myFile,line))
        {

            cout << line <<  endl;
        }

        cin  >> line ;

    }

    else{

        std::cout << "FATAL ERROR: INTRO" << std::endl;
    }


}


void gamemap::DrawFinal()
{


    string line;

    int row =0;

    ifstream myFile("victory.txt");

    if(myFile.is_open())
    {

        while( getline (myFile,line))
        {

            cout << line <<  endl;
        }

        cin  >> line ;

    }

    else
    {

       std::cout << "FATAL ERROR: VICTORY" << std::endl;

    }




}
