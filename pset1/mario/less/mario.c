#include <stdio.h>
#include <cs50.h>
int main(void)
{

    int height;

    //prompt the height of the pyramide
    do
    {
        height = get_int("How tall should the pyramid be?\n");
    }
    while (height < 1 || height > 8);

    //create the pyramid
    for (int i = 0; i < height; i++)
    {

        // print the spaces
        for (int j = height - 1; j > i; j--)
        {
            printf(" ");
        }

        //print the hashes
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }

        printf("\n");
    }

}
