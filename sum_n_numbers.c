#include <stdio.h>

void input(float a[],int n)
{
    for(int i=0; i<n; i++)
    {
        printf("Enter %d number", (i+1));
        
        scanf("%f",&a[i]);
    }
}
float sum(float a[],int n)
{
    float s=0.0;
    for(int i=0; i<n; i++)
    s=s+a[i];
    return s;
}
void output(float s)
{
    printf("The sum of numbers are %f",s);
}
int main()
{
    int n;
    printf("Enter the total number of numbers\n");
    scanf("%d",&n);
    float a[n];
    input(a,n);
    float s=sum(a,n);
    output(s);
    return 0;
}
