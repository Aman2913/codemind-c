#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int arr[n];
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int flag=0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j){
                continue;
            }
            else if (arr[i]==arr[j]){
                flag=0;
                break;
            }
            else{
                flag=1;
            }
        }
        if (flag==1){
            printf("%d",arr[i]);
            break;
        }
    }
    if (flag==0){
        printf("-1");
    }
    return 0;
}