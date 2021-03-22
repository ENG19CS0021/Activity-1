#include <stdio.h>
#include<math.h>
struct point
{
float x;
float y;
};
typedef struct point Point1;
Point1 input()
{
Point1 p;
printf(“Enter Abscissa\n ”);
scanf(“%f”,&(p.x));
printf(“Enter Ordinate\n”);
scanf(“%f”,&(p.y));
return p;
}
float compute(Point1 p1, point1 p2)
{
float d;
d=sqrt(pow(((p1.x)-(p2.x)),2)+pow(((p1.y)-(p2.y)),2));
return d;
}
void output(Point1 p1, Point1 p2, float d)
{
printf(“the distance between %f,%f and %f,%f is %f”, (p1.x),(p1.y),(p2.x),(p2.y),d);
}
int main(void)
{
float d;
Point1 p1,p2;
p1()=input();
p2=input();
d=compute(p1,p2);
output(p1,p2,d);
Return 0;
}
