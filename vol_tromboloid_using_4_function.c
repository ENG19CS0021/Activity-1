#include<stdio.h>

float input()
{
    float a;
    scanf("%f",&a);
    return a;
}
float find_vol(float a, float b, float c)
{
    float vol;
    vol=((a*b*c)+(b/c))/3.0;
    return vol;
}
void output(float a)
{
    printf("the ans is %f",a);
}
int main()
{
    float x,y,z,vol;
    printf("enter the height\n");
    x=input();
    printf("enter the depth\n");
    y=input();
    printf("enter the breadth\n");
    z=input();
    vol=find_vol(x,y,z);
    output(vol);
    return 0;
}
