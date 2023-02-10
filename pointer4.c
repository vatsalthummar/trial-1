#include <stdio.h>
void marks(int,int,int,int,float *,float *);
int main()
{
    int m1,m2,m3,t;
    float avg,per;
    printf("Enter the marks of three subjects\n");
    scanf("%d%d%d",&m1,&m2,&m3);
    printf("Enter the marks of one subject\n");
    scanf("%d",&t);
    marks(m1,m2,m3,t,&avg,&per);
    printf("average is %f\n",avg);
    printf("percentage is %f\n",per);
    return 0;
}
void marks(int a,int b,int c,int d,float *average,float *percentage)
{
    *average=(a+b+c)/3;
    *percentage=(a+b+c)*100/(3*d);
}