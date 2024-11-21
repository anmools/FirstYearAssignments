/*
Program Description: Rock Paper Scissors

Author: Anmool Shah

Date: 03/02/2024
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void rockpaperscissors(char);

int main()
{
    char move;
    char response;
    int num;
    char rock = 'r';
    char paper = 'p';
    char scissors = 's';

    printf("The rules are:\nScissors beats Paper\nPaper beats Rock\nRock beats Scissors\n\nPlease enter your move: ");
    scanf(" %c", &move);

    srand(time(NULL));

    num = (rand() % 3) + 1;

    if (num == 1)
    {
        response = rock;
    }
    if (num == 2)
    {
        response = paper;
    }
    else
    {
        response = scissors;
    }

    printf("%c", response);

    if (move == response)
    {
        printf("\nDraw\n");
    }
    else
    {
        if ((move == 's' && response == 'p') || (move == 'r' && response == 's') || (move == 'p' && response == 'r'))
        {
            printf("\nYou win!\n");
        }
        else
        {
            printf("\nYou lose!\n");
        }
    }

    return 0;
}
