#include<stdio.h>
int main()
{
    int n,number,count=0;
    scanf("%d",&n);
    while(n)
    {
        scanf("%d",&number);
        count=0;
        for(int i=1;i*i<=number;i++)
        {
            if(i*i==number)
            {
                count++;
                printf("True
");
                break;
            }
        }
        if(count==0)
        {
            printf("False
");
        }
        n--;
    }
}