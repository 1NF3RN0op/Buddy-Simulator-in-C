#include <stdio.h>
#include <stdlib.h>

void mountain()
{
    printf("You find two paths in your way.\n");
    printf("1. Path 1\n");
    printf("2. Path 2\n");
    int choice_mountain;
    scanf("%d", &choice_mountain);
    switch(choice_mountain)
    {
        case 1:
            printf("You decided not to go further anymore.\n");
            return;
        case 2:
            printf("Yes, let's move on!!!\n");
            break;
        default:
            printf("Invalid choice. Please choose either 1 or 2.\n");
            exit(1);
    }
}

void forest()
{
    printf("You find yourself in a dark forest.\n");
    printf("There are two paths ahead. Which one do you take?\n");
    printf("1. Left path\n");
    printf("2. Right path\n");
    int choice_forest;
    scanf("%d", &choice_forest);
    switch(choice_forest)
    {
        case 1:
            printf("You encounter a bear! You have no choice but to run away.\n");
            break;
        case 2:
            printf("You find a hidden treasure chest!\n");
            break;
        default:
            printf("Invalid choice. Please choose either 1 or 2.\n");
            exit(1);
    }
}


int main()
{
    char name[40];
    printf("Hello! I'm your assistant.\n");
    printf("Let me know your name please?\n");
    scanf("%s", name);
    printf("Well that's great!\n");
    printf("If I'm not wrong, right now you are bored, am I right?\n");
    printf("So let's play a game, it's called an adventure game. So let's begin!!!\n");
    printf("...................................................................................\n");
    printf("You wake up in a mysterious place...\n");
    printf("You see a signpost ahead.\n");
    printf("It points towards a dark forest.\n");
    printf("Do you want to enter the forest? (1: Yes, 2: No)\n");
    int choice_forest;
    scanf("%d", &choice_forest);
    if(choice_forest == 1)
    {
        forest();
    }
    else if (choice_forest == 2)
    {
        printf("You decided not to enter the forest. Game over.\n");
        return 0;
    }
    else
    {
        printf("Invalid choice. Please choose either 1 or 2.\n");
        return 1;
    }

    printf("You opened the chest and found a key.\n");
    printf("Then you moved on.\n");

    printf("Then you ended up coming to a mountain and you have two ways in front of you.\n");
    printf("Would you like to take the risk?\n");
    int choice_mountain;
    scanf("%d", &choice_mountain);
    if(choice_mountain == 1)
    {
       printf("You decided not to go further anymore.\n");
       return 0;
    }
    else if (choice_mountain == 2)
    {
        mountain();
    }
    else
    {
        printf("Invalid choice. Please choose either 1 or 2.\n");
        return 1;
    }

    printf("Now you are going through that risky mountain road.\n");
    printf(".......................................................................................\n");
    printf("At last you crossed that mountain. It was hard, but you did it!!\n");
    printf("Suddenly a person with full steel armor and a sword come in front of you and blocked your way. He is looking really tough!\n");

    return 0;
}
