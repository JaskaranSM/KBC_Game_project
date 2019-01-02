#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
int score=0;
int num=0;
int ch;
int ch,len,i,score;
int lower = 1, upper = 10, count = 1;
char choice[200];
char name[1000];
void first();
void second();
void third();
void fourth();
void fifth();
void sixth();
void seventh();
void eighth();
void nineth();
void tenth();
void random();
void wrong();
void start();
void printRandoms(int lower, int upper,
                             int count)
{
    int i;
    for (i = 0; i < count; i++) {
         num = (rand() %
           (upper - lower + 1)) + lower; //Randomly generated value is being Stored in num variable
         int *rptr;
         rptr=&num;
    }
}
int main()
{
    system("CLS");
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
         start();
         break;
    case 2:
        system("CLS");
        system("TYPE score");
        printf("\nPress Enter To Go Back To Main Menu");
        getchar();
        if (getchar() == '\n')
            main();
        break;
    case 3:
        system("EXIT");
        break;
    default:
        if (getchar() == '\n')
            main();
    }
}
void first()
{
            system("CLS");
            printf("\nScore=%d",score);
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
                printf("\nCORRECT ANSWER");
                score=score+1000;
                printf("\nPress Enter to get next question...");
                getchar();
                if(getchar() == '\n')
                {
                    if(score==10000)
                    {
                        writefile();
                        system("CLS");
                        printf("\nYou Won the Game.");
                        printf("\nScore=%d",score);

                    }
                    else
                    {
                    random();
                    }
                }
            }
            else
                wrong();
}
void second()
{
    system("CLS");
    printf("\nScore=%d",score);
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
                printf("\nCORRECT ANSWER");
                score=score+1000;
                printf("\nPress Enter to get next question...");
                getchar();
                if(getchar() == '\n')
                {
                    if(score==10000)
                    {
                        writefile();
                        system("CLS");
                        printf("\nYou Won the Game.");
                        printf("\nScore=%d",score);

                    }
                    else
                    {
                    random();
                    }
                }
            }
            else
                wrong();
}
void third()
{
    system("CLS");
    printf("\nScore=%d",score);
    printf("\n\nThe Last element of an array in c will be at index ?");
    printf("\n1.n");
    printf("\n2.n-1");
    printf("\n3.n+1");
    printf("\n4.none of these");
    printf("\nEnter Your answer:");
    scanf("%d",&ch);
    if(ch==2)
            {
                printf("\nCORRECT ANSWER");
                score=score+1000;
                printf("\nPress Enter to get next question...");
                getchar();
                if(getchar() == '\n')
                {
                    if(score==10000)
                    {
                        writefile();
                        system("CLS");
                        printf("\nYou Won the Game.");
                        printf("\nScore=%d",score);

                    }
                    else
                    {
                    random();
                    }
                }
            }
            else
                wrong();
}
void fourth()
{
    system("CLS");
    printf("\nScore=%d",score);
    printf("\n\nThe Index Value of Any Array starts From ?");
    printf("\n1.0");
    printf("\n2.1");
    printf("\n3.-1");
    printf("\n4.none of these");
    printf("\nEnter Your answer:");
    scanf("%d",&ch);
    if(ch==1)
            {
                printf("\nCORRECT ANSWER");
                score=score+1000;
                printf("\nPress Enter to get next question...");
                getchar();
                if(getchar() == '\n')
                {
                    if(score==10000)
                    {
                        writefile();
                        system("CLS");
                        printf("\nYou Won the Game.");
                        printf("\nScore=%d",score);

                    }
                    else
                    {
                    random();
                    }
                }
            }
            else
                wrong();
}
void fifth()
{
    system("CLS");
    printf("\nScore=%d",score);
    printf("\n\nWho is the father of computer ?");
    printf("\n1.Roman Pearce");
    printf("\n2.Steve Jobs");
    printf("\n3.Bill Gates");
    printf("\n4.Charles Babbage");
    printf("\nEnter Your answer:");
    scanf("%d",&ch);
    if(ch==4)
            {
                printf("\nCORRECT ANSWER");
                score=score+1000;
                printf("\nPress Enter to get next question...");
                getchar();
                if(getchar() == '\n')
                {
                    if(score==10000)
                    {
                        writefile();
                        system("CLS");
                        printf("\nYou Won the Game.");
                        printf("\nScore=%d",score);

                    }
                    else
                    {
                    random();
                    }
                }
            }
            else
                wrong();
}
void sixth()
{
    system("CLS");
    printf("\nScore=%d",score);
    printf("\n\nMaximum Data Rate of a DDR2 Ram is ?");
    printf("\n1.533 MT/s");
    printf("\n2.667 MT/s");
    printf("\n3.1066 MT/s");
    printf("\n4.1333 MT/s");
    printf("\nEnter Your answer:");
    scanf("%d",&ch);
    if(ch==3)
            {
                printf("\nCORRECT ANSWER");
                score=score+1000;
                printf("\nPress Enter to get next question...");
                getchar();
                if(getchar() == '\n')
                {
                    if(score==10000)
                    {
                        writefile();
                        system("CLS");
                        printf("\nYou Won the Game.");
                        printf("\nScore=%d",score);

                    }
                    else
                    {
                    random();
                    }
                }
            }
            else
                wrong();
}
void seventh()
{
    system("CLS");
    printf("\nScore=%d",score);
    printf("\n\nWho is Fifth Prime Minister of India  ?");
    printf("\n1.Rajiv Gandhi");
    printf("\n2.Charan Singh");
    printf("\n3.Inder Kumar Gujral");
    printf("\n4.Manmohan Singh");
    printf("\nEnter Your answer:");
    scanf("%d",&ch);
    if(ch==2)
            {
                printf("\nCORRECT ANSWER");
                score=score+1000;
                printf("\nPress Enter to get next question...");
                getchar();
                if(getchar() == '\n')
                {
                    if(score==10000)
                    {
                        writefile();
                        system("CLS");
                        printf("\nYou Won the Game.");
                        printf("\nScore=%d",score);

                    }
                    else
                    {
                    random();
                    }
                }
            }
            else
                wrong();
}
void eighth()
{
    system("CLS");
    printf("\nScore=%d",score);
    printf("\n\nWhat is Einstein's Equation ?");
    printf("\n1.E=Mc2");
    printf("\n2.(a+B)2=a2+2ab+b2");
    printf("\n3.x+y2=x+y/y2-x");
    printf("\n4.None of these");
    printf("\nEnter Your answer:");
    scanf("%d",&ch);
    if(ch==1)
            {
                printf("\nCORRECT ANSWER");
                score=score+1000;
                printf("\nPress Enter to get next question...");
                getchar();
                if(getchar() == '\n')
                {
                    if(score==10000)
                    {
                        writefile();
                        system("CLS");
                        printf("\nYou Won the Game.");
                        printf("\nScore=%d",score);

                    }
                    else
                    {
                    random();
                    }
                }
            }
            else
                wrong();
}
void nineth()
{
    system("CLS");
    printf("\nScore=%d",score);
    printf("\n\nWho Created Java Programming Language ?");
    printf("\n1.Guido van Rossum");
    printf("\n2.Yukihiro Matsumoto");
    printf("\n3.Bjarne Stroustrup");
    printf("\n4.James Gosling");
    printf("\nEnter Your answer:");
    scanf("%d",&ch);
    if(ch==4)
            {
                printf("\nCORRECT ANSWER");
                score=score+1000;
                printf("\nPress Enter to get next question...");
                getchar();
                if(getchar() == '\n')
                {
                    if(score==10000)
                    {
                        writefile();
                        system("CLS");
                        printf("\nYou Won the Game.");
                        printf("\nScore=%d",score);

                    }
                    else
                    {
                    random();
                    }
                }
            }
            else
                wrong();
}
void tenth()
{
    system("CLS");
    printf("\nScore=%d",score);
    printf("\n\nIf You Choose an answer to this question at random, What is the chance you will be correct ?");
    printf("\n1.25%");
    printf("\n2.35%");
    printf("\n3.50%");
    printf("\n4.75%");
    printf("\nEnter Your answer:");
    scanf("%d",&ch);
    if(ch==4)
            {
                printf("\nCORRECT ANSWER");
                score=score+1000;
                printf("\nPress Enter to get next question...");
                getchar();
                if(getchar() == '\n')
                {
                    if(score==10000)
                    {
                        writefile();
                        system("CLS");
                        printf("\nYou Won the Game.");
                        printf("\nScore=%d",score);

                    }
                    else
                    {
                    random();
                    }
                }
            }
            else
                wrong();
}
void wrong()
{
    printf("\n\nYour Answer is wrong..So you Have to Try Again from starting..");
    printf("\nYour Score=%d",score);
    printf("\nPress Enter to Restart Game..:");
    writefile();
    if (getchar() == '\n')
    {
        start();
    }
}
void random()
{
    srand(time(0));
        printRandoms(lower, upper, count);
        printf("\nvalue generated is :%d",num);
        if(num==1)
        {
            first();
        }
        else if(num==2)
        {
            second();
        }
        else if(num==3)
        {
            third();
        }
        else if(num==4)
        {
            fourth();
        }
        else if(num==5)
        {
            fifth();
        }
        else if(num==6)
        {
            sixth();
        }
        else if(num==7)
        {
            seventh();
        }
        else if(num==8)
        {
            eighth();
        }
        else if(num==9)
        {
            nineth();
        }
        else if(num==10)
        {
            tenth();
        }
}
void start()
{
    while(ch!=2)
    {
        getchar();
        system("CLS");
        score=0;
        printf("----GAME STARTED----");
        printf("\nEnter Your Name:");
        gets(name);
        system("CLS");
        printf("\nHello %s, Welcome To The KBC Game..",name);
        printf("\n\nPress Enter To Let The Game Roll..");
        if (getchar() == '\n')
        {
              random();
        }
        printf("\nDo You Want to Continue Or not?(1/2):");
    scanf("%d",&ch);

    }
}
void writefile()
{
    FILE *fp;
    fp = fopen("Score.", "a");
    fprintf(fp,"\nPlayer Name:%s\nScore:%d",name,score);
    fclose(fp);
}

