#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x = get_int("x = ? ");
    int y = get_int("y = ? ");
    if (x > y)
    {
        printf("x greater than y\n");
    }
    else if (x < y)
    {
        printf("x less than y\n");
    }
    else
    {
        printf("x and y is equal\n");
    }
}