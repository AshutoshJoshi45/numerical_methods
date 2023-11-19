#include<stdio.h>
#include<stdlib.h>
#include<time.h>
long fact(long n)
{
long prod=n;
if(n>1)
{
prod=prod*fact(n-1);
}
return prod;
}
int main()
{
long n=20;
clock_t t;
t=clock();
long factorial=fact(n);
t=clock()-t;
double time=(float)t/CLOCKS_PER_SEC;
printf("Using recursion in C\n");
printf("Time=%f sec\n",time);
printf("N=%ld",n);
printf("\nN!=");
printf("%ld",factorial);
printf("\n");
return 0;
}
