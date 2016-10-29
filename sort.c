#include<stdio.h>
int a[100],n,i;
void sort();
void print();

void main()
 {
  printf("enter size:\n");
  scanf("%d",&n);
  printf("Enter %d elements:\n",n);
  for(i=1;i<=n;i++)
  {
   scanf("%d",&a[i]);
  }
 sort();
 print();
 }
void sort()
 {
  int j,temp;
  for(i=1;i<=n;i++)
   {
   for(j=1;j<=(n-i);j++)
    {
     if(a[j]>a[j+1])
     {
      temp=a[j];
      a[j]=a[j+1];
      a[j+1]=temp;
     }
    }
   }
 }
 void print()
  {
   for(i=1;i<=n;i++)
   {
    printf("%d  ",a[i]);
   }
  printf("\n");
  } 
  
