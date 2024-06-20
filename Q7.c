#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch=='e'||ch=='E')
    {
        printf("Early Bird Ticket");
    }
    else if(ch=='d'||ch=='D')
    {
        printf("Discount Ticket");
    }
    else if(ch=='v'||ch=='V')
    {
        printf("VIP Ticket");
    }
    else if(ch=='C'||ch=='c')
    {
        printf("Child Ticket");
    }
    else if(ch=='s'||ch=='S')
    {
        printf("Standard Ticket");
    }
    else
    {

    }

}
