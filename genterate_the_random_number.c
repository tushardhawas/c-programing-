#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int number;
    int lower = 25, upper = 35;


//for a specific limit of number 


    srand(time (0));
    number = (rand()% (upper-lower+1)) +lower;
    printf("the number genrataed is %d\n",number);
  //for simple method

      srand(time (0));
    number = rand()%51; 
    printf("the number genrataed is %d",number);
  

    return 0;
}