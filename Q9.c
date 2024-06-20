#include<stdio.h>
int main()
{
    int n;
    float s;
    scanf("%d",&n);
    if(n<15000)
    {
        s=n+(15*n/100)+(9*n/10);
        printf("%.2f",s);
    }
    else
    {
        s=n+5000+(98*n/100);
        printf("%.2f",s);
    }
}
