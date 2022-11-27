#include <stdio.h>
#include <cs50.h>

int main()
{
    // int i = 0;
    // while (i<3) 
    // {
    //     printf("loops of %i \n",i);
    //     i++;
    // };
    int input = get_int("input number whatever you want : ");
    for (int i = 0; i < input; i++)
    {
        printf("loops of %i \n",i);
    }

}