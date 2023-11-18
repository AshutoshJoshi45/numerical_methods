#include<math.h>
#include<stdio.h>
#include<stdlib.h>
float* mean_variance(int* pointer,int n)
{
static float mv[2];
float mean=0.0;
float mean2=0.0;
for(int i=0;i<n;i++)
{
mean=mean+pointer[i];
mean2=mean2+pointer[i]*pointer[i];
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
FILE *fptr1=NULL;
int *ptr;
int i;
int n=100;
ptr=(int*)calloc(n,sizeof(int));
for(i=0;i<n;i++)
{
ptr[i]=(i+1)*(i+1);
}
float* mean_ptr;
mean_ptr=mean_variance(ptr,n);
fptr1=fopen("array1.bin","wb");
for(i=0;i<n;i++)
{
fwrite(&ptr[i],sizeof(ptr[i]),1,fptr1);
}
fclose(fptr1);
free(ptr);
return 0;
}

