#include<stdio.h>
int main()
{
float h,b,d,v;
printf(“\nEnter the value of h,b and d\n”);
scanf(“%f %f %f”,&h,&b,&d);
v=((h*b*d)+(d/b))/3;
printf(“volume of tromboloid is :%f\n”,v);
return 0;
}
