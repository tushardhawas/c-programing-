#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>


int main()
{
    int number, guess, nguesses=1;
    int select;

          printf("slect difficulty level\n easy(press 1) moderate(press 2) hard(press 3)\n");
           scanf("%d",&select);


        if(select==1)
        {
         
                    srand(time(0));
                    number = rand()%25 + 1; // Generates a random number between 1 and 100
          
          do{
               printf("Guess the number between 1 to 25\n");
               scanf("%d", &guess);
               if(guess>number){
                    printf("Lower number please!\n");
               }
               else if(guess<number){
                    printf("Higher number please!\n");
               }
               else{
                    printf("You guessed it in %d attempts\n", nguesses);
               }
               nguesses++;
          }while(guess!=number);
        }



       else if(select==2)
        {
         
                    srand(time(0));
                    number = rand()%50 + 1; // Generates a random number between 1 and 100
          
          do{
               printf("Guess the number between 1 to 50\n");
               scanf("%d", &guess);
               if(guess>number){
                    printf("Lower number please!\n");
               }
               else if(guess<number){
                    printf("Higher number please!\n");
               }
               else{
                    printf("You guessed it in %d attempts\n", nguesses);
               }
               nguesses++;
          }while(guess!=number);
        }





        else if(select==3)
        {
         
                    srand(time(0));
                    number = rand()%100 + 1; // Generates a random number between 1 and 100
          
          do{
               printf("Guess the number between 1 to 100\n");
               scanf("%d", &guess);
               if(guess>number){
                    printf("Lower number please!\n");
               }
               else if(guess<number){
                    printf("Higher number please!\n");
               }
               else{
                    printf("You guessed it in %d attempts\n", nguesses);
               }
               nguesses++;
          }while(guess!=number);
        }

else
{
     printf("you pressed sometimg worng");
}

 getch();
 
 
    return 0;
   
}