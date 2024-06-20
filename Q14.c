#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int a=n*m;
    if(a%2==0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}
