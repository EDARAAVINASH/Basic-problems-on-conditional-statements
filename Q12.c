#include<stdio.h>
#include<math.h>
int main()
{
    int n,x1,x2,x3,y1,y2,y3;
    float ab,ca,bc;
    scanf("%d",&n);
    scanf("%d %d",&x1,&y1);
    scanf("%d %d",&x2,&y2);
    scanf("%d %d",&x3,&y3);
    ab=sqrt(pow((y2-y1),2)+pow((x2-x1),2));
    bc=sqrt(pow((y3-y2),2)+pow((x3-x2),2));
    ca=sqrt(pow((y3-y1),2)+pow((x3-x1),2));
    if(ab<=n && bc<=n || ab<=n && ca<=n)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}
