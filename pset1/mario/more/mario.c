#include <stdio.h>
#include <cs50.h>
int main(void)
{
    int height;
    //prompt the height of the pyramid
    do
    {
        height = get_int("How tall should the pyramid be?\n");
    }
    while (height < 1 || height > 8);

    for (int i = 0; i < height; i++)
    {
        //spaces to create the pyramid
        for (int j = 0; j < height - i - 1; j++)
        {
            printf(" ");
        }

        //the first half of the pyramid
        for (int k = 0; k < i + 1; k++)
        {
            printf("#");
        }

        //print the spaces between the 2 parts of the pyramid
        printf("  ");

        //print the second half of the pyramid
        for (int k = 0; k < i + 1; k++)
        {
            printf("#");
        }
        printf("\n");
    }
