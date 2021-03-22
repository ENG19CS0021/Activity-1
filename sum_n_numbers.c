#include<stdio.h>
Int main()
{
Int n,a[ 20],sum;
printf(“enter the total numbers\n”);
scanf(“%d”,&n);
for(int i=0;i<n;i++)
{
printf(“Enter a number\n”);
scanf(“%d”,&a[i]);
sum=sum+a[i];
}
printf(“the total sum is %d”, sum);
Return 0;
}
