#include<stdio.h>
int main()
{
    int n,c;
    float f,d;
    scanf("%d%d",&c,&n);
    if(n<50)
    {
        float f=c*n;
        printf("%.2f",f);
    }
    else if(n>=50 && n<=100)
    {
        f=c*n;
        d=f-f/10;
        printf("%.2f",d);
    }
    else if(n>=101 && n<=200)
    {
        f=c*n;
        d=f-f/5;
        printf("%.2f",d);
    }
    else if(n>=201 && n<=400)
    {
        f=c*n;
        d=f-(3*f/10);
        printf("%.2f",d);
    }
    else if(n>=401 && n<=500)
    {
        f=c*n;
        d=f-(2*f/5);
        printf("%.2f",d);
    }
    else
    {
        f=c*n;
        d=f-f/2;
        printf("%.2f",d);
    }
}
