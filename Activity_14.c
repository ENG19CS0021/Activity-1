#include<stdio.h>
#include<string.h>
struct Time_Card
{
    char ename[50];
    float mins;
};
typedef struct Time_Card card ;
struct employee
{
    char name[50];
    float Hrwage;
    float hours;
    float GrossP;
};
typedef struct employee Em;
void input_1(Em *one)
{
    printf("Enter Name and hour\n ");
    scanf("%s%f",one->name,&one->Hrwage);
}
void input_n(int n,Em em[])
{
   
    for(int i=0; i<n; i++)
        input_1(&em[i]);
}
void input_tc(int m,card tc[])
{

    for(int i=0; i<m; i++)
        scanf("%s%f",tc[i].ename,&tc[i].mins);
}
float calc_hrs(Em one,int m,card tc[])
{
    float Tmins=0;
    for(int i=0; i<m; i++)
    {
        if(strcmp(one.name,tc[i].ename)==0)
            Tmins=Tmins+tc[i].mins;
    }
    return Tmins/60;
}
void compute_1(Em *one,int m,card tc[])
{
    one->hours=calc_hrs(*one,m,tc);
    if(one->hours>40)
        one->GrossP=(40*one->Hrwage+(one->hours-40)*(1.5*one->Hrwage));
    else
        one->GrossP=one->hours*one->Hrwage;
}
void compute_n(int n,Em em[],int m,card tc[])
{
    for(int i=0; i<n; i++)
        compute_1(&em[i],m,tc);
}
void output_1(Em *one)
{
    if(one->GrossP>0)
        printf("%s:%f hours,$%f",one->name,one->hours,one->GrossP);
}
void output_n(int n,Em em[])
{
    for(int i=0; i<n; i++)
        output_1(&em[i]);
}
int main() 
{
    int n,m;
    printf("Enter number of employee\n ");
    scanf("%d",&n);
    Em em[n];
   
    input_n(n,em);
    printf("Enter number of time card submitted\n ");
    scanf("%d",&m);
    printf("Enter the name of employee and time worked\n");
    card tc[m];
    input_tc(m,tc);
    compute_n(n,em,m,tc);
    output_n(n,em);
    return 0;
}
