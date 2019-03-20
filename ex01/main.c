#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <memory.h>
#include "main.h"

int main() {
    //WhileLoop();
    //WhilePrintf();
    //ForLoop();
    //CreateArray();
    //DynamicArray();
    //TwoDimensionalArray();
    StringArray();
    return 0;
}
 int WhileLoop(){
     int i;
     i=1;
     while(i<=10){
         printf("Hello world %d\n",i);
         i++;
     }
     return 1;
}
int WhilePrintf(){
    int i=1;
    while(i<=printf("Hi\n")){
        printf("Hello\n");
        i++;
    }
    return 0;
}

int ForLoop(){
    int i,k;
    long t;
    t=time(NULL);
    srand(t);
    for(i=1;i<=10;i++){

        k=rand()%10000;
        printf("Hello world %d\n",k);
    }
    return 0;
}
int CreateArray(){
      int i=0;
      int x[100]={0};
      x[0]=10;
      x[99]=2;
      printf("First element of the array %d\n",x[0]);

      for(i=0;i<100;i++){
          x[i]=i+1;
      }

    for(i=0;i<100;i++){
        printf("Array element %d\n",x[i]);
    }

    return 0;
}

int DynamicArray(){

    int i;
    int siz=10;
    int X[siz];


    for(i=0;i<siz;i++){
        printf("Enter value of array : ");
        scanf("%d",&X[i]);
    }

    for(i=0;i<siz;i++){
        printf("Array element %d\n",X[i]);
    }


    return  0;
}
int TwoDimensionalArray(){

    int x[4][3];
    int i,j;

    for (i=0;i<4;i++){
        for(j=0;j<3;j++){
            x[i][j]= i * j;
        }
    }

    return 0;
}

int StringArray(){

    char str[]="Hello world";
    printf("%s",str);

    printf("\n");
    char str2[12];
    strcpy(str2,"Hello world");

    printf("%s",str2);

    return 0;
}