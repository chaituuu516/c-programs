#include<stdio.h>
void main()
{
int n,x,i,j;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("\n");
for(j=1;j<=n-i;j++)
{
printf(" ");
}
x=65;
for(j=1;j<=i;j++)
{
printf("%c",x);
x++;
}
}
}
