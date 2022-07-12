#include<stdio.h>
#include<math.h>
int main()
{
    int x,m,y,sum=0;
    scanf("%d%d%d",&x,&y,&m);
    sum=pow(x,y);
    printf("%d",sum%m);
}