#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
    char name1[100];
    char name2[] = "umar";
    int pass1;
    int pass2 = 12345;
    int marks = 0;
    float percentage;

    printf("Enter your Name: ");
    scanf("%s", name1);

    if (strcmp(name1, name2) != 0)
    {
        printf("Your name is wrong\n");
        return;
    }

    printf("Enter your password: ");
    scanf("%d", &pass1);

    if (pass1 != pass2)
    {
        printf("Sorry, your password is wrong\n");
        return;
    }

    printf("\t\t\t\t.....Welcome to the Quiz.....\n");
    printf("1. Press any key for the next question\n");
    printf("2. Marks less than 50%% will fail the test\n");

    getchar();
    system("clear || cls");

    char ans;

    printf("Q.1 Which is the first state to join Pakistan?\n");
    printf("a) Shikarpur\n");
    printf("b) Bahawulpur\n");
    printf("c) Kashmir\n");
    printf("d) Chagi\n");
    printf("Enter your answer: ");
    scanf(" %c", &ans);

    if (ans == 'B' || ans == 'b')
    {
        printf("\t\t\t Your answer is right\n");
        marks++;
    }
    else
    {
        printf("\t\t\t Your answer is wrong\n");
    }
    getchar();
    system("clear || cls");

    
   
    printf("........ Your Marks are: %d ........\n", marks);
    percentage = (marks * 100) / 10;
    printf("........ Your percentage is: %.2f%% ........\n", percentage);

    if (percentage <= 50)
    {
        printf("........ Sorry, you lose ........\n");
    }
    else
    {
        printf("........ Congratulations, you win ........\n");
    }
}

