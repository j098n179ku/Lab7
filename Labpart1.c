#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


/*
    Code Authored by me
    This score calculator function takes the nfl_score as a parameter.
    there are a total of 5 different scoring types to check and only the combinations
    that total the nfl score will be printed out
*/
int score_calc(int nfl_score)
{
    int td = 6; //touchdown variable integer worth 6 points
    int fg = 3; //field goal variable integer worth 3 points
    int safety = 2; //safety integer worth 2 points

    for (int i = 0; i*td <= nfl_score; i++) //initializes an i counter variable and loops until the counter times the amount of touchdowns is less than or equal to 25
    {
        for (int j = 0; j*fg  <= nfl_score; j++) //makes a j counter variable, iterates through the counter and multiplies it by the field goal points until it is less than or equal to 25
        {
            for (int k=0; k*safety <= nfl_score; k++) //makes a k counter variable, iterates through the counter and multiplies it by the safety points until it is less than or equal to 25
            {
                for (int l=0; l*(td+1) <= nfl_score; l++) //makes a k counter variable, iterates through the counter and multiplies it by the touchdown plus 1 point until it is less than or equal to 25
                {
                    for (int m=0; m*(td+2) <= nfl_score; m++) //makes a k counter variable, iterates through the counter and multiplies it by the touchdown plus 2 point until it is less than or equal to 25
                    {
                        if (i*td + j*fg + k*safety + l*(td+1) + m*(td+2) == nfl_score) //this makes sure that the added combination of each multiplied score is equal to the nfl_score. any combinations that do not add up to the nfl_score will not be printed out
                        {
                            printf("%d TD, %d 3pt FG, %d Safety, %d TD + FG, %d TD + 2pt\n", i, j, k, l, m); //this prints out the number of each type of score that added up to equal the total nfl score
                        }
                        
                    }
                }
            }
        }
    }
    return 0; //functions need a return even though this isnt rally used
}

/*
    code euthored by me. referenced this link to figure out how to clear the input in case of bad input

    https://stackoverflow.com/questions/7898215/how-can-i-clear-an-input-buffer-in-c

    the main function will prompt the user,
    get the users input,
    and also handle all the error handling
*/
int main() //initializes the main function
{
    int nfl_score; //user input will be saved in this integer variable
    bool is_valid_input = false; //this boolean will keep the while loop going until a valid input is given

    while (is_valid_input == false) //keeps the loop going until the nfl_score input is properly filled out
    {
        printf("Enter 0 or 1 to stop program\n"); //Gives the user information on how to exit the program
        printf("or enter an NFL score: \n"); //also lets the user know that they can enter a number to try to see an nfl score
        if (scanf("%d", &nfl_score) == 1) //thiis grabs the users input and checks to make sure that the input is actually valid
        {
            if (nfl_score < 0)//this checks to make sure that the input is not a negative number
            {
                printf("points cannot be negative, try again\n"); //lets the user know that the input cannot be a negative number
                while (getchar() != '\n');  //clears out the input so the user can try again
            }
            else if (nfl_score == 0 || nfl_score == 1) //otherwise, if the users input is 0 or 1
            {
                printf("Exiting"); //tells the user their input has caused the program to exit
                return 0; //returns to end the program
            }
            else //otherwise
            {
                score_calc(nfl_score); //calls the score calc function to pass the users input into the funciton
                is_valid_input = true; //sets the boolean to true to break out of the while loop
            }

        }
        else //otherwise
        {
            printf("invalid input, try again\n"); //lets the user know that the input was incorrect
            while (getchar() != '\n'); //clears out the input so the user can try again
        }

    }
    return 0; //returns to end the program
}