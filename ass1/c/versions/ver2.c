#include<math.h>
#include<stdio.h>
#include<stdlib.h>
float* mean_variance(float* pointer,int n)
{
static float mv[2];
float mean=0.0;
float mean2=0.0;
for(int i=0;i<n;i++)
{
mean=mean+pointer[i];
mean2=mean2+pow(pointer[i],2);
}
mean=mean/n;
mean2=mean2/n;
float variance=mean2-pow(mean,2);
mv[0]=mean;
mv[1]=variance;
return mv;
}
int main()
{
float* ptr;
int i;
int n=100;
ptr=(float*)calloc(n,sizeof(float));
for(i=0;i<n;i++)
{
printf("%f",ptr[i]);
printf(",");
if((i+1)%5==0)
{
printf("\n");
}
ptr[i]=pow(i+1,2);
}
float* mean_ptr;
mean_ptr=mean_variance(ptr, n);
printf("\nmean=");
printf("%f",mean_ptr[0]);
printf("\nvariance=");
printf("%f",mean_ptr[1]);
printf("\n");
free(ptr);
return 0;
}

