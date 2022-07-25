#include <stdio.h>
#include <windows.h>
#include <stdlib.h>


int main(){


int tableNumber,tableEndNumber,tableStartNum;
system("cls");
printf("Hello..! , \n  Welcome to the table generate \n");
printf("Please Enter a Table Number i.e 2,3,4.. \n");
scanf("%d",&tableNumber);
printf("Table start from ? i.e 2,3,4,5..\n");
scanf("%d",&tableStartNum);
printf("Table end , please enter number i.e 2,3,4... \n ");
scanf("%d",&tableEndNumber);
for(int i=tableStartNum; i<=tableEndNumber; i++){

    printf("%d   X  %d  =  %d \n",tableNumber,i,tableNumber*i);

}



return 0;


}