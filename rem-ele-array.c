#include<stdio.h>
void main()
{
 int n,a[100],i,k,b[100],j=0;
 scanf("%d",&n);
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);
 scanf("%d",&k);
 for(i=0;i<n;i++)
 {
  if(k>a[i]){b[j]=a[i];
   j++;}
 }
printf("%d\n",j);
for(i=0;i<j;i++)
 printf("%d ",a[i]);
 }
