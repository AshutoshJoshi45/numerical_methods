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
FILE* fptr;
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
fptr=fopen("array.txt","w");
for(i=0;i<n;i++)
{
fprintf(fptr,"%f",ptr[i]);
fprintf(fptr,",");
if((i+1)%5==0)
{
fprintf(fptr,"\n");
}
}
fclose(fptr);
free(ptr);
return 0;
free(fptr);
}

