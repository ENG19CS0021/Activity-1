#include<stdio.h>
#include<math.h>
float input()
{
    float a;
    scanf("%f",&a);
    return a;
}
float distance(float x1, float y1, float x2, float y2)
{
    float d;
    d=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    return d;
}
void output(float x1, float y1, float x2, float y2, float d)
{
    printf("distance between %f%f and %f%f is %f\n", x1,y1,x2,y2,d);
}
int main()
{
    float x1,y1,x2,y2,z;
    printf("enter x1 coordinate\n");
    x1=input();
    printf("enter y1 coordinate\n");
    y1=input();
    printf("enter x2 coordinate\n");
    x2=input();
    printf("enter y2 coordinate\n");
    y2=input();
    z=distance(x1,y1,x2,y2);
    output(z,x1,y1,x2,y2);
    return 0;
}
