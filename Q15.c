#include<stdio.h>
int main()
{
    int x1,y1,x2,y2;
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    if(x1!=x2 && y1!=y2)
    {
        printf("sad");
    }
    else if(x1>x2)
    {
        printf("left");
    }
    else if(y1>y2)
    {
        printf("down");
    }
    else if(x2>x1)
    {
        printf("right");
    }
    else if(y1<y2)
    {
        printf("up");
    }
}
