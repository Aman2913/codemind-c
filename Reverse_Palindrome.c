#include<stdio.h>
int rev(int a)
{
    int x=0;
    while(a)
    {
        x=(x*10)+a%10;
        a/=10;
    }
    return x;
}
int main()
{
    int n;
    scanf("%d",&n);
    while(n)
    {
        n+=rev(n);
        if(n==rev(n))
        {
            printf("%d",n);
            break;
        }
    }
}