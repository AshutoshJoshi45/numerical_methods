#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<mv_header.h>
void main()
{
float* ptr;
int i;
int n=100;
ptr=(float*)malloc(n*sizeof(float));
for(i=0;i<n;i++)
{
ptr[i]=pow(i+1,2);
}
float* mean_ptr;
mean_ptr=mean_variance(ptr,n);
printf("\nmean=");
printf("%f",mean_ptr[0]);
printf("\nvariance=");
printf("%f",mean_ptr[1]);
printf("\n");
free(ptr);
return;
}

