
#include<stdio.h>
int main()
{
    int n,a[10],sum=0;
    printf("Enter total number\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
     printf("Enter a number\n");
     scanf("%d",&a[i]);
     sum=sum+a[i];
    }
    printf("The total sum is %d",sum);
    return 0;
}
