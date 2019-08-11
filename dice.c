#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int i=1,p=1, h=1,t,dice1,sum,dice2,TotalCorrect=0,TotalIncorrect=0,score=0;
    t=time(NULL);
    srand(t);
	while(h>0)
	{
	 dice1=(rand()%6)+1;
	while(i<=10000000)
    {
        p+=i;
        i++;

    }
    dice2=(rand()%6)+1;
	while(dice2 == dice1)
	{
	    dice2 = (rand() %6)+1;
	}
	sum=dice1+dice2;
	printf("Computer rolled two dice...Guess the sum\n");
	printf("Enter any <=0 value to terminate\n");
	printf("Enter your guess:\n");
	scanf("%d",&h);
	if(h<=0)
		break;
	else if(h!=sum)
		{
			printf("Darn!!! bad attempt, -5\n");
			printf("Sum was %d\n",sum);
			TotalIncorrect++;
			score=score-5;
			printf("\n");
		}

		else
		{
			printf("Bravo!! You were correct +10\n");
			TotalCorrect++;
        		score=score+10;
        		printf("\n");
		}
		printf("Total Correct:   %d\n",TotalCorrect);
		printf("Total Incorrect:   %d\n",TotalIncorrect);
		printf("Score:   %d\n",score);
		printf("\n");

	}
	return 0;
}
