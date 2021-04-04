#include<stdio.h>

struct _student
{
	char name[50];
	float score;
	char grade;
	int marks[50];
};
typedef struct _student st;

struct _gradebook
{
	char subject[50];
	int num_weights;
	float weights[50];
	int student_num;
	st student[50];
};
typedef struct _gradebook gb;

void input_GB(gb*one)
{
	scanf("%s",one->subject);
	scanf("%d",&one->student_num);
	scanf("%d",&one->num_weights);
    for(int i=0;i<one->num_weights;i++)
    {
        scanf("%f",&one->weights[i]);
    }
	for(int i=0;i<one->student_num;i++)
	{
		scanf("%s",one->student[i].name);
		for(int j=0; j<one->num_weights; j++)
		{
			scanf("%d",&one->student[i].marks[j]);
		}
	}
}
void input_n(int n, gb agb[])
{
	for(int i=0;i<n;i++)
	{
		input_GB(&agb[i]);
	}
}
char marks_to_grade(float r)
{
    if(r>=0&&r<60)
    return 'F';
    
    else if(r>=60&&r<70)
    return 'D';
    
    else if(r>=70&&r<80)
    return 'C';
    
    else if(r>=80&&r<90)
    return 'B';
    
    else 
    return 'A';
}
void compute_GB(gb*one)
{
    float W=0.0;
    for(int i=0;i<one->num_weights;i++)
    {
        W+=one->weights[i];
    }
    
    for(int i=0;i<one->student_num;i++)
    {
        one->student[i].score=0.0;
        for(int j=0;j<one->num_weights;j++)
        {
            one->student[i].score+=one->student[i].marks[j]*one->weights[j];
        }
        one->student[i].score=one->student[i].score / W;
        one->student[i].grade=marks_to_grade(one->student[i].score);
    }
}

void compute_n(int n, gb agb[])
{
	for(int i=0;i<n;i++)
	{
		compute_GB(&agb[i]);
    }
}
void output_GB(gb*one)
{
    
    printf("%s\n",one->subject);
    for(int i=0;i<one->student_num;i++)
    {
     printf("%s\t %f\t %c\n",one->student[i].name,one->student[i].score,one->student[i].grade);
    }
}
void output_n(int n,gb agb[])
{
    for(int i=0;i<n;i++)
    {
        output_GB(&agb[i]);
    }
}
int main()
{

  int n;

  scanf("%d",&n);

  gb agb[n];

  input_n(n,agb);

  compute_n(n,agb);

  output_n(n,agb);

  return 0;
} 
