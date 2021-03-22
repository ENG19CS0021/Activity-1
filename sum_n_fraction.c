#include<stdio.h>

Struct fract
{
int nume;
int deno;
};
typedef struct fract fraction;
fraction input()
{
fraction a;
printf(“Enter numerator\n”);
scanf(“%d”, &a.nume);
printf(“Enter denominator\n”);
scanf(“%d”,&a.deno);
Return a;
}
fraction sum(fraction a, fraction b);
{
Fraction res;
if(a.deno==b.deno)
{
res.deno=a.deno;
res.nume=a.nume+b.nume;
}
Else
{
res.deno=a.deno*b.deno;
res.nume=(a.nume*b.deno)+(b.nume*a.deno);
}
Return res;
}
int main()
{
int n;
printf(“Enter the no. of fractions\n”);
scanf(“%d”,n);
Fraction c,a[n];
c.nume=0;
c.deno=1;
for(int i=0; i<n; i++)
{
printf(“For fraction %d”,(i+1));
a[i]=input();
}
for(int i=0; i<n; i++)
{
c=sum(c,a[i]);
}
printf(“The final sum is %d/%d which is %.2f ”, c.nume,c.deno, (c.nume/1.0*c.deno))*100);
return 0;
}
