#include<math.h>
#include<stdlib.h>
#include<mv_header.h>
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
