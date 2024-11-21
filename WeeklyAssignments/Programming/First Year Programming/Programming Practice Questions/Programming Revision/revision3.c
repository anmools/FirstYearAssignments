/*
Program Description: Guessing game where the user has to guess a number between 1-10.

Author: Anmool Shah

Date: 28/11/2023
*/

#include <stdio.h>

int main()
{
	int number;
	int guesses;
    int i;
	int correct;
	int incorrect;


	do
	{
        //To ask the user to input a random number between 1-10 from standard input
		printf("\nGuess %d", i);

		printf("\nEnter a number between 1 - 10:\n");

		scanf("%d", &guesses);

        //?
		srand(time(NULL));
		
        //To give a random value to "number"
		number = rand() % 10+1;
    
		// To display the random number
		printf("\nThe random number is: %d", number);
	
		//To check if the users guess and the random number is the same 
		if(guesses == number)
		{
			printf("\nYou have guessed the correct number!");
		
			//To increment the counter for the correct numbers
			correct++;
		
		} //end if
		else
		{
			printf("\nYou have guessed the incorrect number!");
		
			
			incorrect++;
		} //end else
		
		//To increment the loop's run
		i++;
		
	} //end do
    //To allow the user to have 5 guesses through the loop
	while(i<5);
    
    //To display how many times the number was the same or different
    printf("\nYou guessed the correct number %d times", correct);
    printf("\nYou guessed the incorrect number %d times", incorrect);
    	
    return 0;

} // end main
