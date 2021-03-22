#include<stdio.h>

struct fract
{
    int nume;
    int deno;
};
typedef struct fract fraction;
fraction input()
{
    fraction a;
    printf("Enter numerator\n");
    scanf("%d",&(a.nume));
    printf("Enter denominator\n");
    scanf("%d",&(a.deno));
    return a;
}
fraction sum(fraction a, fraction b)
{
    fraction res;
    if(a.nume==b.deno)
    {
        res.deno=a.deno;
        res.nume=a.nume+b.nume;
    }
    else
    {
        res.deno=a.deno*b.deno;
        res.nume=(a.nume*b.deno)+(b.nume*a.deno);
    }
    return res;
}
int main()
{
    int n;
    printf("Enter the number of fraction\n");
    scanf("%d",&n);
    fraction c,a[n];
    c.nume=0;
    c.deno=1;
    for(int i=0; i<n; i++)
    {
        printf("fraction %d",(i+1));
        a[i]=input();
    }
    for(int i=0; i<n; i++)
    {
        c=sum(c,a[i]);
    }
    printf("The final sum of %d/%d which is %.2f %", c.nume,c.deno,(c.nume/(1.0*c.deno))*100);
    return 0;
}
