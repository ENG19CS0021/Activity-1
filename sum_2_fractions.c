 
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
    printf("enter the numerator\n ");
    scanf("%d",&(a.nume));
    printf("enter the denominator\n ");
    scanf("%d",&(a.deno));
    return a;
}
int gcd(int a, int b)
{
    int g=1;
    for(int i=2;i<=a && i<=b;i++)
    {
        if(a%i==0 && i<=b; i++)
         { 
            g=i;
         }
    }
  return g;
} 
fraction sum(fraction a, fraction b)
{
    fraction res;
    res.deno=a.deno*b.deno;
    res.nume=(a.nume*b.deno)+(b.nume*a.deno);
    int g=gcd(rs.nume,res.deno);
    res.nume=res.nume/g;
    res.deno=res.deno/g;
       return res;
}
void output(fraction a, fraction b, fraction c)
{
   printf(“The sum of %d / %d and %d / %d is %d / %d”, a.nume, a.deno, b.nume, b.deno, c.nume, c.deno);
}

int main()
{
    fraction a,b,c;
    a=input();
    b=input();
    c=sum(a,b);
    output(a,b,c);
       return 0;
}

