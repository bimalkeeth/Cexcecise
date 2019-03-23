#include <stdio.h>
#include <recursion.h>
#include <pointers.h>
#include "header/functions-01.h"
#include "header/example-02.h"

int main() {

    int nRows,nCols;
    int **p;
    printf("Enter number of rows: ");
    scanf("%d",&nRows);

    printf("Enter number of columns: ");
    scanf("%d",&nCols);

    p=Dynamic2DArray(nRows,nCols);
    inputValues(p,nRows,nCols);
    PrintValues(p,nRows,nCols);
    //DynamicAllocation();


    // VoidPointer();


//    char str[100];
//    printf("Enter a string");
//    scanf("%[^\n]",str);
//    ToggleChar(str);
//    printf("Toggled characters:%s\n",str);

   // int x[]={10,20,39,40,50};

   // PrintArray(x,5);


//    printf("%p,%p\n",x,&x[0]);
//    int i=0;
//    printf("Contents of array is :\n");
//    for(i=0;i<5;i++){
//        printf("%4d\n",*(x+i));
//    };

    //InterestCapture();
    //printf("Is prime %d", IsPrimeNumber(17));
    //printMessage(100);
    //decToBin(12);
    //towerHonai(3,1,2,3);
    //MainPointers();
     //PointerToPointer();

//     int x=100,y=200;
//     printf("x = %d, y = %d\n",x,y);
//     Swap(&x,&y);
//     printf("x = %d, y = %d",x,y);
  return 0;
}