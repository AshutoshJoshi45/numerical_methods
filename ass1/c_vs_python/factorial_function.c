#include<stdio.h>
#include<stdlib.h>
long fact(int n)
{
long prod=n;
if(n>1)
{
prod=prod*fact(n-1);
}
return prod;
}
