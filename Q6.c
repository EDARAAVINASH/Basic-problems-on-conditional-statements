#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d\n%d\n%d",&a,&b,&c);
    if(a+b+c==180)
    {
        if(a==b && a==c)
        {
            printf("Prize 3");
        }
        else if(a==90||b==90||c==90)
        {
            printf("Prize 2");
        }
        else
        {
            printf("prize 1");
        }
    }
    else
    {
        printf("No prize");
    }
}
