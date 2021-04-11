#include<stdio.h>
#include<math.h>
struct points
{
	float x;
	float y;
};
typedef struct points P;

struct rectangle
{
float Length;
float Breadth;
float Area;
P p[3];
};
typedef struct rectangle Rect;

void input_1(Rect*one )
{
for(int i=0; i<3; i++)
{
printf("point %d \n",i+1);
printf("enter the value of x-coordinate & y-coordinate: \n");
scanf("%f %f",&one->p[i].x, &one->p[i].y);
}
}

void input_n(int n, Rect r[])
{
for(int i=0; i<n; i++)
input_1(&r[i]);
}

float calculate_dist(float x1,float x2,float y1,float y2)
{
float dist= sqrt(pow((x2-x1),2)+ pow((y2-y1),2));
return dist;
}

void calculate_1_b(Rect*one)
{
float a,b,c;
a=calculate_dist(one->p[0].x,one->p[1].x,one->p[0].y,one->p[1].y);
b=calculate_dist(one->p[0].x,one->p[2].x,one->p[0].y,one->p[2].y);
c=calculate_dist(one->p[1].x,one->p[2].x,one->p[1].y,one->p[2].y);
if(a<=b && a<=c)
{
one->Length=a;
one->Breadth=fmin(b,c);
}
else if(b<=a && b<=c)
{
one->Length=b;
one->Breadth=fmin(a,c);
}
else 
{
one->Length=c;
one->Breadth=fmin(a,c);
}
}

void compute_area_1(Rect*one)
{
calculate_1_b(one);
one->Area=one->Length*one->Breadth;
}

void compute_area_n(int n, Rect r[])
{
for(int i=0;i<n;i++)
compute_area_1(&r[i]);
}

void output_1(Rect*one)
{
printf("area of rectangle with vertices (%.2f,%.2f), (%.2f,%.2f), (%.2f, %.2f) is %.2f  \n ",one->p[0].x, one->p[0].y, one->p[1].x, one->p[1].y, one->p[2].x, one->p[2].y, one->Area);
}

void output_n(int n, Rect r[])
{
for(int i=0; i<n; i++)
output_1(&r[i]);
}
int main()
{
int n;
printf("Enter the  number of rectangles");
scanf("%d",&n);
Rect r[n];
input_n(n,r);
compute_area_n(n,r);
output_n(n,r);
return 0;
}
