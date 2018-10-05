#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
void second();
void third();
void delay(unsigned int mseconds)
{
    clock_t goal=mseconds + clock();
    while(goal > clock());
}
int main()
{
    int ch,len,i,score;
    char choice[200];
    char name[1000];
    printf("----------------------------");
    printf("\n-Kaun Banega Crorepati Game-");
    printf("\n----------------------------");
    printf("\n\n1.START GAME");
    printf("\n2.View Saved Scores");
    printf("\n3.EXIT");
    printf("\nEnter Your Choice:");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        getchar();
        system("CLS");
        printf("\nEnter Your Name:");
        gets(name);
        if(name[0]=='j')
        {
            ch=NULL;
            system("CLS");
            printf("Hello %s, Welcome To The KBC Game..",name);
            printf("\n\nLets Start, Your First Question is:--");
            printf("\n\nWho Developed C-Language?");
            printf("\n\nOptions:-");
            printf("\n1.Nicola Tesla");
            printf("\n2.Dennis Ritche");
            printf("\n3.Albert Einstein");
            printf("\n4.None of The Above");
            printf("\nEnter Your Answer:");
            scanf("%d",&ch);
            if(ch==2)
            {
                system("CLS");
                printf("\nCorrect Answer!!");
                printf("\nYou Have Won Rs.10000!!!!");
                printf("\n\n\n\n\nLoading Game.");
                score=10000;
                for(i=0;i<2;i++)
                {

                    delay(1000);
                    printf(".");
                }
                system("CLS");
                printf("You Wanna See Your Next Question or Quit the game?(1/2):\n");
                scanf("%d",&ch);
                if(ch==1)
                {
                 second();
                }
                else
                {
                    point:
                    system("CLS");
                    printf("\nYour Score is:%d",score);
                    printf("\nEnter 1 to exit...");
                    scanf("%d",&ch);
                    if(ch==1)
                    {
                     system("EXIT");
                    }
                    else
                    {
                        goto point;
                    }

                }
            }
            else
            {
                system("CLS");
                printf("Sorry,Your Answer is Wrong!!");
                printf("\nTry Again....");
            }
        }
        break;
    default:
        printf("\nWrong Input");
    }
    return 0;
}
void second()
{
    int ch,score,i;
    system("CLS");
    printf("Congratulations, You Will Now Answer Second Question that is worth Rs.20000..");
    printf("\n\nTraversing in Linked list Means?");
    printf("\nOptions:-");
    printf("\n1.Searching");
    printf("\n2.Sorting");
    printf("\n3.Visiting");
    printf("\n4.None of these");
    printf("\nEnter Your Answer:");
    scanf("%d",&ch);
    if(ch==3)
            {
                system("CLS");
                printf("\nCorrect Answer!!");
                printf("\nYou Have Won Rs.20000!!!!");
                printf("\n\n\n\n\nLoading Game.");
                score=30000;
                for(i=0;i<2;i++)
                {

                    delay(1000);
                    printf(".");
                }
                system("CLS");
                printf("You Wanna See Your Next Question or Quit the game?(1/2):\n");
                scanf("%d",&ch);
                if(ch==1)
                {
                 third();
                }
                else
                {
                    point:
                    system("CLS");
                    printf("\nYour Score is:Rs.%d",score);
                    printf("\nEnter 1 to exit...");
                    scanf("%d",&ch);
                    if(ch==1)
                    {
                     system("EXIT");
                    }
                    else
                    {
                        goto point;
                    }

                }
            }
            else
            {
                system("CLS");
                printf("Sorry,Your Answer is Wrong!!");
                printf("\nTry Again....");
            }

}
void third()
{
    printf("\n\nYET TO BUILD...!!!");
}
