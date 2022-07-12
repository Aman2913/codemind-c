#include<stdio.h>
void fun(int n)
{
    int left=0,right=0;
    for(int temp,rev=0,i=n+1;right==0;i++)
    {
        temp=i,rev=0;
        while(temp)
        {
            rev=(rev*10)+temp%10;
            temp/=10;
        }
        if(rev==i)
        {
            right=i;
            break;
        }
    }
    for(int temp,rev=0,i=n-1;left==0;i--)
    {
        temp=i,rev=0;
        while(temp)
        {
            rev=(rev*10)+temp%10;
            temp/=10;
        }
        if(rev==i)
        {
            left=i;
            break;
        }
    }
    if(n-left<right-n)
    printf("%d",left);
    else if(n-left>right-n)
    printf("%d",right);
    else
    printf("%d %d",left,right);
}
int main()
{
    int n;
    scanf("%d",&n);
    fun(n);
}