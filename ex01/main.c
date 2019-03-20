#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "main.h"

int main() {
    WhileLoop();
    WhilePrintf();
    ForLoop();
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