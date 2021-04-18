
/*
Aviation Question and Answer 4.0
This application is written by Ty Donaldson
*/

#include <stdio.h>

int security() // Two factor Auth. To enter into the program the user has to answer two questions correctly
{
    int year = 2021; // 
    int classnum = 310;
    int math = 4;
    
    /*
    
    Here are the list of questions below. If the user gets the questoins wrong it will exit the program no longer allowing them to continue. 
    This is my way of intergrating security. There are mutiple ways of authorization in doing what I did. 

    */
    printf("What is the year?\n");
    scanf_s("%d", &year);
    if (year == 2021)
    {
        printf("Correct! You may continue!\n");
    }
    else
    {
      
        _Exit(0);
    }
    printf("What is the class number?\n");
    scanf_s("%d", &classnum);
    if (classnum == 310)
    {
        printf("Correct! You may continue!\n");
    }
    else
    {

        _Exit(0);
    }
    printf("What is 2+2?\n");
        scanf_s("%d", &math);
        if(math == 4)
        {
            printf("Correct! You may continue!");
        }
        else
        {

            _Exit(0);
        }

}

union name { // Creating union called 'name' as it will collect the name & display
    char askName; // Ask for players name
    char displayName; // Display the players name

} w;

struct end // Struct end for the end of the game to display the questions 
{
    int totalQ; // Create totalQ for the amount of Q's

};

int questions(){ // Holds questions 

    int ans; // To collect answers
    int count = 0; // Score keeper variable 
    int var = 10; // Set number of questions - variable declaration 
    int* total; // Pointer declaration 

    total = &var; // Pointer decleration and definition

    /*

    The next loops are asking the questions and collecting the answers

    If the answer is correct it will display that is was correct and report it to count
    If the answer is incorrect it will display that is was incorrect

    Count collects the amount of right answers and displays it at the end
    */

    printf("Q(1)Aviation is the best! \n 1.True \t\t2.False\n\n");
    printf("Your answer: ");
    scanf_s("%d", &ans);


    if (ans == 1)
    {
        printf("Correct! +1 points. Great job\n\n");
        ++count;



    }
    else
    {
        printf("Wrong Answer!\n\n");

    }

    printf("Q(2)A 747 is made by Airbus! \n 1.True \t\t2.False\n\n");
    printf("Your answer: ");
    scanf_s("%d", &ans);


    if (ans == 2)
    {
        printf("Correct! +1 points\n\n");
        ++count;


    }
    else
    {
        printf("Wrong Answer!\n\n");

    }

    printf("Q(3) Bob Hoover was the first pilot ever! \n 1.True \t\t2.False\n\n");
    printf("Your answer: ");
    scanf_s("%d", &ans);


    if (ans == 2)
    {
        printf("Correct! +1 points. Great job\n\n");
        ++count;


    }
    else
    {
        printf("Wrong Answer!\n\n");

    }

    printf("Q(4)Becoming a Pilot is easy \n 1.True \t\t2.False\n\n");
    printf("Your answer: ");
    scanf_s("%d", &ans);


    if (ans == 1)
    {
        printf("Correct! +1 points. Great job\n\n");
        ++count;



    }
    else
    {
        printf("Wrong Answer!\n\n");

    }

    printf("Q(5)The 747 MAX is a dangerous plane \n 1.True \t\t2.False\n\n");
    printf("Your answer: ");
    scanf_s("%d", &ans);


    if (ans == 2)
    {
        printf("Correct! +1 points. Great job\n\n");
        ++count;


    }
    else
    {
        printf("Wrong Answer!\n\n");

    }

    printf("Q(6) The Wright Brothers flew for 12 seconds on their first flight. \n 1.True \t\t2.False\n\n");
    printf("Your answer: ");
    scanf_s("%d", &ans);


    if (ans == 1)
    {
        printf("Correct! +1 points. Great job\n\n");
        ++count;


    }
    else
    {
        printf("Wrong Answer!\n\n");

    }

    printf("Q(7) The 747 family has flown more than 5.6 billion people \n 1.True \t\t2.False\n\n");
    printf("Your answer: ");
    scanf_s("%d", &ans);


    if (ans == 1)
    {
        printf("Correct! +1 points. Great job\n\n");
        ++count;



    }
    else
    {
        printf("Wrong Answer!\n\n");

    }

    printf("Q(8) JFK was always named JFK \n 1.True \t\t2.False\n\n");
    printf("Your answer: ");
    scanf_s("%d", &ans);


    if (ans == 2)
    {
        printf("Correct! +1 points. Great job\n\n");
        ++count;


    }
    else
    {
        printf("Wrong Answer!\n\n");

    }

    printf("Q(9) Qantas is the first oldest airline.  \n 1.True \t\t2.False\n\n");
    printf("Your answer: ");
    scanf_s("%d", &ans);


    if (ans == 2)
    {
        printf("Correct! +1 points. Great job\n\n");
        ++count;


    }
    else
    {
        printf("Wrong Answer!\n\n");

    }

    printf("Q(10) The F-22 is a military jet. \n 1.True \t\t2.False\n\n");
    printf("Your answer: ");
    scanf_s("%d", &ans);


    if (ans == 1)
    {
        printf("Correct! +1 points. Great job\n\n");
        ++count;



    }
    else
    {
        printf("Wrong Answer!\n\n");
        
    }

 
} // Questions function : Stores all the questions 

int main() {

    security();


    char name[100] = "name"; // Name for capturing the name of player


    char p[100]; // File array
    FILE *ftpr;
    ftpr = fopen("C:\\QA\\intro.txt", "r"); // Opens File "Intro" to display the intro
   

    fscanf(ftpr,"%s", p);
    printf("\n\n\n %s\n\n", p); // Displays text inside "Intro"
    fclose(ftpr); // Closes Text
  


    w.askName = printf("Hello. What's your name?\n"); // Asks for name for introduction;
    scanf_s("%s", name, 100); // Gets name and stores it under NAME
    w.displayName = printf("Hi there,**** %s ****. Let's get started\n\n\n", name); // Displays the name



    questions(); // Display the questions


}