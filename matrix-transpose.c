#include<stdio.h>
 void main()
  { 
   int a[100][100],m,n,i,j;
    printf("Enter range of matrix:");
    scanf("%d%d",&n,&m);
   printf("Enter matrix\n");
    for(i=1;i<=n;i++)
     {
     for(j=1;j<=m;j++)
      scanf("%d",&a[i][j]);
     }
    for(i=1;i<=n;i++)
     {
     for(j=1;j<=m;j++)
      printf("%d\t",a[j][i]);
    printf("\n");
     }
 }
     
