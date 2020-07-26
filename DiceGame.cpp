// DiceGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <time.h>

int main()
{
    int dice1, dice2,dice3,dice4;
    bool isFirst;
    int player1=0, player2=0;
    do {
    
    do
    {
        std:: cout << '\n' << "please enter any kew to throw the dice\n";
    } while (std::cin.get() != '\n');

    srand(rand());
    dice1 = 1 + (rand() % 6);
    srand(rand());
    dice2 = 1 + (rand() % 6);
    std::cout << "Your dices are \n";
    std::cout << "dice 1 : " << dice1 << "dice 2: " << dice2<< std::endl;
    std::cout << "Computer AI throwing the dice";
    //To make the winning average to close to 70%  
    srand(rand());
    dice3 = 3 + (rand() % 3);
    srand(rand());
    dice4 = 3 + (rand() % 3);
    std::cout << "Computer AI dices are  \n";
    std::cout << "dice 3 : " << dice3 << "dice 4: " << dice4 << std::endl;

    if (dice1 == dice2&&dice3==dice4) // if they both are double
    {
        if (dice1 + dice2 > dice3 + dice4)
        {
            std::cout << "You win!!";
            player1++;
        }
        else if (dice1 + dice2 < dice3 + dice4)
        {
            std::cout << "Computer win!!";
            player2++;

        }
        else if (dice1 + dice2 == dice3 + dice4)
        {
            std::cout << "it's a draw";
        }      
    }
    else if (dice1 == dice2 && dice3 != dice4)// if human are double
    {
        std::cout << "Human throw a double ,human win ";
        player1++;

    }
    else if (dice1 != dice2 && dice3 == dice4) //if computer are double
    {
        std::cout << "computer throw a double ,computer win ";
        player2++;

    }
    else if (dice1 != dice2 && dice3 != dice4)//both are not double
    {
        if (dice1 + dice2 > dice3 + dice4)
        {
            std::cout << "You win!!";
            player1++;

        }
        else if (dice1 + dice2 < dice3 + dice4)
        {
            std::cout << "Computer win!!";
            player2++;

        }
        else if (dice1 + dice2 == dice3 + dice4)
        {
            std::cout << "it's a draw";
        }
    }
    else
    {
        std::cout << "it's a draw";
    }

    std::cout << "\nhuman points are: " << player1 << "   computer AI points are: " << player2<<std::endl;
    std::cout << "\npress q to quit ,press any key continue to play \n";
    } while (std::cin.get() != 'q');
}
