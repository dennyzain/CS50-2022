#include <cs50.h>
#include <stdio.h>

int main(void){
// ! if char type u must be using one quote ' '
    char is_agree= get_char("Y or N ? ");
    if(is_agree=='Y'||is_agree=='y')
    {
        printf("you agree!\n");
    }else if(is_agree=='n'||is_agree=='N')
    {
        printf("you disagree\n");
    }else{
        printf("you not answer the question");
    }

}