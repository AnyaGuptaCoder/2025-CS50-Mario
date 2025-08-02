#include <cs50.h>
#include <stdio.h>
int main(void)
{
    int x = get_int("Height: ");
    while(x<1||x>8){
        x = get_int("Height: ");
    }
    printf("\n");
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x - i - 1; j++)
        {
            printf(" "); 
        }
        for (int j = 0; j < i + 1; j++)
        {
            printf("#");
        }
        printf("  ");
        for (int j = 0; j < i + 1; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
