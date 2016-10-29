#include<string.h>
#include<stdio.h>
 int x,j,f;
 char c[30],a[50],t[30];
 int amount,i,j,not;
int claculate(int y);
int buslist();
void display();
 
int calculate(int y)
  {
   printf("\n..Enter number of tickets..\n");
   scanf("%d",&not);

   if(y==1){
      amount=not*65;strcpy(t,"Ordinary");}
   else if(y==2){
      amount=not*105;strcpy(t,"Non-Stop");}
   else if(y==3){
      amount=not*126;strcpy(t,"Delux");}
   else if(y==4){
      amount=not*150;strcpy(t,"Super-luxary");}

 return amount; 
  }
 int buslist()
   {
    printf("\n.......busses available.......\n");
    printf(" 1.Ordinary\n 2.Non-stop\n 3.Delux\n 4.Super-luxary\n");
    scanf("%d",&x);
    return x;
  }
 void main()
  {
   int q=1;
   printf("Enter station name : \n");
    scanf("%s",a);
   while(q)
    {
     printf(".......Destination stations.......\n 1.Vijayawada\n 2.Amalapuram\n 3.Rajamahendravaram\n 4.Tuni\n 5.EXIT\n");
     scanf("%d",&i);
      switch(i)
       {
        case 1:j=buslist();
   	       f=calculate(j);
               strcpy(c,"Vijayawada");
               display();
               break;
        case 2:j=buslist();
   	       f=calculate(j);
               strcpy(c,"Amalapuram");
               display();
               break;
        case 3:j=buslist();
   	       f=calculate(j);
               strcpy(c,"Rajamahendravaram");  
               display();
               break; 
       case 4:j=buslist();
   	       f=calculate(j);
               strcpy(c,"Tuni");
	       display();
               break;
       case 5:q=0;
               break;
  }
 }
}
 void display()
  {
   printf("\n*******APSRTC******\n");
 printf("   From : %s \n",a);
 printf("   To   : %s \n",c);
 printf("   Bus  : %s \n",t);
 printf("   tckts: %d \n",not);
 printf("   amnt : %d \n",f);
printf("*******************\n");
}
