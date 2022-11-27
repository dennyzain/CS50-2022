#include <stdio.h>
#include <cs50.h>

int main()
{
    string name;
    do{
    name = get_string("who am i :");
    }
    while(name!="SD");
    printf("its same name");
}