#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        printf("%d%d",a,a+b);
    }
    else
    {
        printf("%d %d",b,a+b);
    }
}
