#include<stdio.h>
int main()
{
    int n,sum=0,pro=1;
    scanf("%d",&n);
    while(n)
    {
        sum+=n%10;
        pro*=n%10;
        n/=10;
    }
    if(pro>sum)
    printf("%d",pro-sum);
    else
    printf("%d",sum-pro);
}