#include<stdio.h>
#include<conio.h>
int a[2][2];
int i,j;
void main()
{
clrscr();
printf("%d",a[1][1]);
scanf("%d",&a[1][0]);
printf("%d",a[1][0]);
for(i=0;i<2;i++)
{
       for(j=0;j<2;j++)
       {
		  printf("arr [%d] [%d] : ",i,j);
		  scanf("%d",&a[i][j]);
       }
}

for(i=0;i<2;i++)
{
       for(j=0;j<2;j++)
       {
		  printf("%d ",a[i],a[j]);

       }
       printf(";
}



getch();
}