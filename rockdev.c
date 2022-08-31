#include<stdio.h>
int main()
{
    int a,b;
    printf("-------------------------\n");
    printf("ROCK PAPER SCISSORS GAME\n");
    printf("-------------------------\n");
    printf("FOLLOW THE BELOW RULES TO PLAY THE GAME\n");
    printf("ENTER 1 FOR OPTING ROCK\n");
    printf("ENTER 2 FOR OPTING PAPER\n");
    printf("ENTER 3 FOR OPTING SCISSORS\n");
    printf("\nENTER THE OPTION OPTED BY THE PLAYER 1\n");
    scanf("%d",&a);
    printf("\nENTER THE OPTION OPTED BY THE PLAYER 2\n");
    scanf("%d",&b);
    if(a==b)
    {
        printf("\nPLAY THE GAME ONCE MORE\n");
    }
    else if(a==1&&b==2)
    {
        printf("\nTHE WINNER OF THE GAME IS PLAYER 1\n");
    }
    else if(a==1&&b==3)
    {
        printf("\nTHE WINNER OF THE GAME IS PLAYER 2\n");
    }
    else if(a==2&&b==3)
    {
        printf("\nTHE WINNER OF THE GAME IS PLAYER 3\n");
    }
    else if(a==2&&b==1)
    {
    	printf("\nTHE WINNER OF THE GAME IS PLAYER 2\n");
	}
	else if(a==3&&b==1)
	{
		printf("\nTHE WINNER OF THE GAME IS PLAYER 1");
	}
	else if(a==3&&b==2)
	{
		printf("\nTHE WINNER OF THE GAME IS PLAYER 2");
	}
    else
    {
        printf("\nENTER THE CORRECT VALUE AS MENTIONED ABOVE\n");
    }
    printf("\n\nTHNK YOU FOR PLAYING THE GAME\n\n");
}
