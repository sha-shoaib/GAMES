
#include <stdio.h>  
#include <time.h>   
#include <stdlib.h>
int main()
{
  printf("***********************************************************\n");
  printf("**----------------Welcome to Guessing Game---------------**\n");
  printf("**---------You can guess if you understand the MATH -----**\n");
  printf("**---------------------------------------------------------\n");
  printf("\n\n");
  const int MAX_CHANCES = 7;  
  int a;

  int computer_guess;  

  long seed = time(NULL);
  
  srand(seed);

 
  computer_guess = rand() % 100;

  
  printf("Program has guessed a number, what you need to do is match it.\n");
  printf("Remember, you have only 7 chances.\n");
  printf("Best wishes...\n\n");

  int user_guess; 

  int chance_count = 1; 
  int match = 0;        
                        

  while(match==0 && chance_count<=MAX_CHANCES)
  {
       printf("Enter your number: ");
   
    scanf("%d", &user_guess);
   
    if (user_guess>computer_guess)
    {                     
      printf("Your guess is high\n\t");
	  a = MAX_CHANCES-chance_count;
	  printf("Number of remaining chances:%d",a);
    }

    else if(user_guess<computer_guess)
    {                 
      printf("Your guess is low \n");
	  a = MAX_CHANCES-chance_count;
	  printf("Number of remaining chances:%d",a);

    }
    else
    {
	    match=1;
			printf("Bingo!! You got it correct %d is the number\t",user_guess);
			printf("you guessed that in %d chances\t",chance_count);
			break;
    }
    
	if (match!=1 && user_guess!=computer_guess)
	{
    
		chance_count++;  
	}
	
	printf("\n\n");
  } 
    if(match==1 && chance_count<=3)
            printf("You are Super Duper NINJA!\t");
    else if(match==1 && (chance_count<3 && chance_count<=5))
            printf("You are Crezy NINJA!\t");
    else if(match==1 && (chance_count==7 || chance_count==6))
            printf("You have potential to be a NINJA!\t");



  if (chance_count>MAX_CHANCES)
  {             
    printf("game over");

  }
  return 0;
}


