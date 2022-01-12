#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //get the input from the user
    string name = get_string("What is your name?\n");
  
    //print the welcoming message
    printf("hello, %s\n", name);
}
