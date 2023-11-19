#include<stdio.h>
int main()
{
FILE *ptr;
int element;
ptr=fopen("array1.bin","rb");
int count=1;
for(count=1;count<=100;count++)
{
fread(&element,sizeof(element),1,ptr);
if(count%10==0)
{
printf("\n");
}
printf("%d\t",element);
}
return 0;
}
