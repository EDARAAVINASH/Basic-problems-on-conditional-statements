#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int c=n%10;
    if(c==3 | c==8)
    {
        printf("Lucky Winner");
    }
    else
    {
        printf("Not a Lucky Winner");
    }

}
