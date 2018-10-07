#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
void second();
void third();
void fourth();
void fifth();
void sixth();
void seventh();
void eighth();
void nineth();
void tenth();
void delay(unsigned int mseconds)
{
    clock_t goal=mseconds + clock();
    while(goal > clock());
}
int main()
{
    system("CLS");
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
        start:
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
                printf("\nPress 1 to Start Game Again:");
                scanf("%d",&ch);
                if(ch==1)
                    goto start;
            }
        }
        break;
    case 2:
        system("CLS");
        printf("Yet to Build....");
        printf("\nPress 1 to go back to main menu:");
        scanf("%d",&ch);
        if(ch==1)
            main();
        break;
    case 3:
        system("EXIT");
        break;
    default:
        printf("\nWrong Input");
        break;
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
                score=20000;
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
                printf("\nPress 1 to Start Game Again:");
                scanf("%d",&ch);
                if(ch==1)
                    main();
            }

}
void third()
{
    int ch,score,i;
    system("CLS");
    printf("Congratulations, You Will Now Answer Third Question that is worth Rs.40000..");
    printf("\nThe Last element of an array in c will be at index ?");
    printf("\n1.n");
    printf("\n2.n-1");
    printf("\n3.n+1");
    printf("\n4.none of these");
    printf("\nEnter Your answer:");
    scanf("%d",&ch);
    if(ch==2)
            {
                system("CLS");
                printf("\nCorrect Answer!!");
                printf("\nYou Have Won Rs.40000!!!!");
                printf("\n\n\n\n\nLoading Game.");
                score=40000;
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
                 fourth();
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
                printf("\nPress 1 to Start Game Again:");
                scanf("%d",&ch);
                if(ch==1)
                    main();
            }

}
void fourth()
{
   int ch,score,i;
    system("CLS");
    printf("Congratulations, You Will Now Answer Fourth Question that is worth Rs.80000..");
    printf("\nThe Index Value of Any Array starts From ?");
    printf("\n1.0");
    printf("\n2.1");
    printf("\n3.-1");
    printf("\n4.none of these");
    printf("\nEnter Your answer:");
    scanf("%d",&ch);
    if(ch==1)
            {
                system("CLS");
                printf("\nCorrect Answer!!");
                printf("\nYou Have Won Rs.80000!!!!");
                printf("\n\n\n\n\nLoading Game.");
                score=80000;
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
                 fifth();
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
                printf("\nPress 1 to Start Game Again:");
                scanf("%d",&ch);
                if(ch==1)
                    main();
            }
}
void fifth()
{
    int ch,score,i;
    system("CLS");
    printf("Congratulations, You Will Now Answer fifth Question that is worth Rs.160000..");
    printf("\nWho is the father of computer ?");
    printf("\n1.Roman Pearce");
    printf("\n2.Steve Jobs");
    printf("\n3.Bill Gates");
    printf("\n4.Charles Babbage");
    printf("\nEnter Your answer:");
    scanf("%d",&ch);
    if(ch==4)
            {
                system("CLS");
                printf("\nCorrect Answer!!");
                printf("\nYou Have Won Rs.160000!!!!");
                printf("\n\n\n\n\nLoading Game.");
                score=160000;
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
                 sixth();
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
                printf("\nPress 1 to Start Game Again:");
                scanf("%d",&ch);
                if(ch==1)
                    main();
            }
}
void sixth()
{
    int ch,score,i;
    system("CLS");
    printf("Congratulations, You Will Now Answer fifth Question that is worth Rs.320000..");
    printf("\nMaximum Data Rate of a DDR2 Ram is ?");
    printf("\n1.533 MT/s");
    printf("\n2.667 MT/s");
    printf("\n3.800 MT/s");
    printf("\n4.1066 MT/s");
    printf("\nEnter Your answer:");
    scanf("%d",&ch);
    if(ch==4)
            {
                system("CLS");
                printf("\nCorrect Answer!!");
                printf("\nYou Have Won Rs.320000!!!!");
                printf("\n\n\n\n\nLoading Game.");
                score=320000;
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
                 seventh();
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
                printf("\nPress 1 to Start Game Again:");
                scanf("%d",&ch);
                if(ch==1)
                    main();
            }
}
void seventh()
{
    int ch,score,i;
    system("CLS");
    printf("Congratulations, You Will Now Answer Seventh Question that is worth Rs.640000..");
    printf("\nWho is Fifth Prime Minister of India  ?");
    printf("\n1.Rajiv Gandhi");
    printf("\n2.Charan Singh");
    printf("\n3.Inder Kumar Gujral");
    printf("\n4.Manmohan Singh");
    printf("\nEnter Your answer:");
    scanf("%d",&ch);
    if(ch==2)
            {
                system("CLS");
                printf("\nCorrect Answer!!");
                printf("\nYou Have Won Rs.1280000!!!!");
                printf("\n\n\n\n\nLoading Game.");
                score=640000;
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
                 eighth();
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
                printf("\nPress 1 to Start Game Again:");
                scanf("%d",&ch);
                if(ch==1)
                    main();
            }
}
void eighth()
{
     int ch,score,i;
    system("CLS");
    printf("Congratulations, You Will Now Answer fifth Question that is worth Rs.1280000..");
    printf("\nWhat is Einstein's Equation ?");
    printf("\n1.E=Mc2");
    printf("\n2.(a+B)2=a2+2ab+b2");
    printf("\n3.x+y2=x+y/y2-x");
    printf("\n4.None of these");
    printf("\nEnter Your answer:");
    scanf("%d",&ch);
    if(ch==1)
            {
                system("CLS");
                printf("\nCorrect Answer!!");
                printf("\nYou Have Won Rs.1280000!!!!");
                printf("\n\n\n\n\nLoading Game.");
                score=1280000;
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
                 nineth();
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
                printf("\nPress 1 to Start Game Again:");
                scanf("%d",&ch);
                if(ch==1)
                    main();
            }
}
void nineth()
{
    int ch,score,i;
    system("CLS");
    printf("Congratulations, You Will Now Answer fifth Question that is worth Rs.2560000..");
    printf("\nWho is the father of computer ?");
    printf("\n1.Roman Pearce");
    printf("\n2.Steve Jobs");
    printf("\n3.Bill Gates");
    printf("\n4.Charles Babbage");
    printf("\nEnter Your answer:");
    scanf("%d",&ch);
    if(ch==4)
            {
                system("CLS");
                printf("\nCorrect Answer!!");
                printf("\nYou Have Won Rs.2560000!!!!");
                printf("\n\n\n\n\nLoading Game.");
                score=2560000;
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
                 tenth();
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
                printf("\nPress 1 to Start Game Again:");
                scanf("%d",&ch);
                if(ch==1)
                    main();
            }
}
void tenth()
{
     int ch,score,i;
    system("CLS");
    printf("Congratulations, You Will Now Answer Tenth Question that is worth Rs.10240000..");
    printf("\nIf You Choose an answer to this question at random, What is the chance you will be correct ?");
    printf("\n1.25%");
    printf("\n2.35%");
    printf("\n3.50%");
    printf("\n4.75%");
    printf("\nEnter Your answer:");
    scanf("%d",&ch);
    if(ch==1)
            {
                system("CLS");
                printf("\nCorrect Answer!!");
                printf("\nYou Have Won Rs.10240000!!!!");
                printf("\n\n\n\n\nLoading Game.");
                score=10240000;
                for(i=0;i<2;i++)
                {

                    delay(1000);
                    printf(".");
                }
                end:
                system("CLS");
                printf("HURRRAAHHH!!! You Have Completed the Game. Now You Will Be Taking 1 Crore Rs. To Your Home.");
                printf("\nPress 1 to Start Game Again or Press 2 to Leave...:");
                scanf("%d",&ch);
                if(ch==1)
                {
                    main();
                }
                else if(ch==2)
                {
                    printf("\nYour Score is:Rs.%d",score);
                    printf("\nEnter 1 to Exit..:");
                    scanf("%d",&ch);
                    if(ch==1)
                    {
                        system("EXIT");
                    }
                }
                else
                {
                    printf("\nWrong Choice...Try Again.");
                    goto end;
                }

            }
            else
            {
                system("CLS");
                printf("Sorry,Your Answer is Wrong!!");
                printf("\nTry Again....");
                printf("\nPress 1 to Start Game Again:");
                scanf("%d",&ch);
                if(ch==1)
                    main();
            }
}
