#include <stdio.h>#
int main()
{
    int p,n;
    float r,si;
    printf("Enter the principle amount\n");
    scanf("%d",&p);
    printf("Enter the number of years\n");
    scanf("%d",&n);
    printf("Enter the rate of interest\n");
    scanf("%f",&r);
    si=p*r*n/100;
    printf("Simple interset is %f",si);
    return 0;
}   
    
