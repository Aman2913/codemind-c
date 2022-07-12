#include<stdio.h>
int main()
{
    int number,x=0;
    scanf("%d",&number);
    while(number!=1)
    {
        if(number%2==0)
        {
            number/=2;
        }
        else if(number%3==0)
        {
            number/=3;
        }
        else if(number%5==0)
        {
            number/=5;
        }
        else
        {
            x++;
            break;
        }
    }
    if(x==1)
    {
        printf("Not Ugly Number");
    }
    else
    {
        printf("Ugly Number");
    }
}