#include "lib.h"
#define vertical 13
#define horizontal 15

void Movement(int map[vertical][horizontal], int input)
{
    switch (input)
    {
    case 'w':
        break;

    case 'a':
        break;

    case 's':
        break;

    case 'd':
        break;
    }
}

void Player1(int map[vertical][horizontal])
{
    int input = tolower(getch());
    Movement(map, input);
}

void Input(int map[vertical][horizontal])
{
    Player1(map);
}

void printMap(int map[vertical][horizontal])
{
    for (short int cont = 0; cont < vertical; cont++)
    {
        for (short int cont2 = 0; cont2 < horizontal; cont2++)
        {
            printf("%c", map[cont][cont2]);
        }
        printf("\n");
    }
}

void buildMap(int map[vertical][horizontal])
{
    for (short int cont = 0; cont < vertical; cont++)
    {
        system("clear");
        map[cont][0] = '|';
        for (short int cont2 = 1; cont2 < (horizontal - 1); cont2++)
        {
            if (cont == 0 || cont == vertical - 1)
                map[cont][cont2] = '-';
            else if (cont2 % 2 == 0 && cont != 1 && cont != (vertical - 2))
                map[cont][cont2] = '@';
            else
                map[cont][cont2] = ' ';
        }
        map[cont][horizontal - 1] = '|';
    }
    // map[]
}

void game()
{
    int map[vertical][horizontal];
    buildMap(map);
    for (;;)
    {
        printMap(map);
        Input(map);
        getchar();
        break;
    }
}

int main()
{
    printf("Bomberman-C");
    printf("\nPress 1 to start game");
    printf("\nPress any other key to close code\n");
    char x = getchar();
    switch (x)
    {
    case '1':
        game();
        break;

    default:
        printf("\nGoodbye.");
        break;
    }
    return 0;
}