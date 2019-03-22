//
// Created by bill on 23/03/19.
//
#include <recursion.h>
#include <stdio.h>

void printMessage(unsigned int n){
    if(n==0){
        return;
    }
    printf("Hello world %d\n",n);
    n--;
    printMessage(n);
}
void decToBin(unsigned int n){
    if(n==1){
        printf("%d\n",n);
        return;
    }
    decToBin(n/2);
    printf("%d\n",n%2);

}

void towerHonai(int n,int source,int aux,int destination){
  if(n==1){
      printf("Move the disk from tower no: %d to tower no : %d\n",source,destination);
      return;
  }
  towerHonai(n-1,source,destination,aux);
  towerHonai(1,source,aux,destination);
  towerHonai(n-1,aux,source,destination);
}
