#include<stdio.h>
void main()
 {
  int i,j,k,a[2][2][2];
   for(i=1;i<=2;i++)
   {
    for(j=1;j<=2;j++)
    {
     for(k=1;k<=2;k++)
      {
        scanf("%d",&a[i][j][k]);
      }
    }
   }
 

   for(i=1;i<=2;i++)
   {
    for(j=1;j<=2;j++)
    {
     for(k=1;k<=2;k++)
      {
        printf("%d  ",a[i][j][k]);
      }
     printf("\n");
    }
   printf("\n");
   }
}
