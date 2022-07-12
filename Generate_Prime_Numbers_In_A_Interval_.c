#include<stdio.h>
int main()
{
    int first,last;
    scanf("%d%d",&first,&last);
    for(int x,count;first<=last;first++)
    {
        x=0,count=1;
       for(count=1,x=0;count<=first/2;count++) 
       {
           if(first%count==0)
           {
               x++;
           }
       }
       if(x==1)
       {
           printf("%d
",first);
       }
    }
}