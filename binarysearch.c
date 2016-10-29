#include<stdio.h>
int low=1,a[100],n,i;
void sort();
void print();
void search();

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
 search();
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
printf("the sorted array is:");
print();
 }
 void print()
  {
   for(i=1;i<=n;i++)
   {
    printf("%d  ",a[i]);
   }
  printf("\n");
  } 
 void search()
  {
   int mid,max,x,key;
   printf("Enter search element:\n");
   scanf("%d",&key);
    mid=(low+n)/2;
    if(key==a[mid])
      printf("key found at %d position\n",mid);
    else if(key>a[mid])
     {
      low=mid;
      for(x=low;x<=n;x++)
      {
       if(key==a[x])
       {
        printf("element %d found at %d location\n",key,x);
       }
      }
     }
    else 
      {
       for(x=low;x<=mid;x++)
      {
       if(key==a[x])
       {
        printf("element %d found at %d location\n",key,x);
       }
      }
     }   
}
