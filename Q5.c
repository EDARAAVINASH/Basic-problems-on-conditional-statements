#include<stdio.h>
int main()
{
    char a,b,c;
    int x,y,z;
    scanf("%c%d %c%d %c%d",&a,&x,&b,&y,&c,&z);
    if(a==b &&a==c && x==y&&x==z)
    {
        printf("Double Bonanza");
    }
    else if(a==b&& a==c || x==y&&x==z)
    {
        printf("Bonanza");
    }
    else
    {
        printf("No Bonanza");
    }
}
