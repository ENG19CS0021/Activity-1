#include<stdio.h>
struct unit_fraction
{
	
	int nume;
	int deno;
};
typedef struct unit_fraction fract;

struct Egyptian_fraction
{
int p;

int deno[100];

fract sum;
};
typedef struct Egyptian_fraction Eg;

int GCD(int a, int b);

int input()
{
int n;

printf("Enter The no. of fractions \n");

scanf("%d",&n);

return n;
}

void input_1(Eg*one)

{
printf("Enter the number of fractions required to be added\n");

scanf("%d",&one->p);

for(int i=0; i<one->p;i++)

scanf("%d",&one->deno[i]);
}

void input_n(Eg a[], int n)

{
for(int i=0;i<n;i++)

input_1(&a[i]);
}

int GCD(int a, int b)

{
a=a<b?a:b;

if(b%a==0)

return a;

for(int i=a/2;i>=2;i--)
{
if(a%i==0&&b%i==0)

return i;
}
return 1;
}

void compute_1(Eg*one)

{

fract res;

res.nume=0;

res.deno=1;

int h;

for(int i=0;i<one->p;i++)
{
one->sum.nume=(res.nume*one->deno[i])+res.deno;

one->sum.deno=res.deno*one->deno[i];

h=GCD(one->sum.nume,one->sum.deno);

one->sum.nume=one->sum.nume/h;

one->sum.deno=one->sum.deno/h;

res=one->sum;
}
}
void compute_n(Eg a[], int n )
{
for(int i=0;i<n;i++)

compute_1(&a[i]);
}

void output_1(Eg*one)

{
for(int i=0;i<(one->p)-1;i++)

printf("1/%d+",one->deno[i]);

printf("1/%d = %d/%d \n",one->deno[(one->p)-1],one->sum.nume,one->sum.deno);
}

void output_n(Eg a[], int n)

{
for(int i=0; i<n; i++)

output_1(&a[i]);
}

int main()

{
int n;

Eg a[100];

n=input();

input_n(a,n);

compute_n(a,n);

output_n(a,n);

return 0;
}
