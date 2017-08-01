#include <stdio.h>
#include<cs50.h>


int main(void)
{
    printf("Height: ");
    int height = get_int();

    while (height < 0 || height > 23)
    {
        printf("Height: ");
        height = get_int();
    }
    for (int i = 1; i <= height; i++)
    {
        for (int j = 0; j < (height - i); j++)
        {
            printf(" ");
        }
        for (int k = 0; k < i; k++)
        {
            printf("#");
        }
        printf("  ");
        for (int k = 0; k < i; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}
