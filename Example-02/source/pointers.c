//
// Created by bill on 23/03/19.
//
#include <pointers.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

void MainPointers(){
    int var=5;
    int* p;
    p=&var;
    *p=100;
    printf("%d\n",*p);
}
void PointerToPointer(){
    int *p,*q;
    int **k;

    int x=100;
    p=&x;
    k=&p;
    printf("%d\n",**k);
    printf("%lu\n", sizeof(p));

    printf("Contents of p: %p\n",p);
}
void Swap(int *a,int *b){
  int temp;
  temp=*a;
  *a=*b;
  *b=temp;
}

void PrintArray(int *parr, int n){
    int i=0;
    for(i=0;i<5;i++){
        printf("%4d\n",*(parr+i));
    };
}
void ToggleChar(char *parr){
    int i;
    for(i=0;*(parr+i)!='\0';i++){
        if(*(parr+i)>='A' && *(parr+i)<='Z'){
            *(parr+i)= (char) (tolower(*(parr + i)));
        }
        if(*(parr+i)>='a' && *(parr+i)<='z'){
            *(parr+i)= (char) (toupper(*(parr + i)));
        }
    }
}

void ConstantPointer(){
    int x[]={1,2,3};
    int * const p=x; // p is constant
    (*p)++;//legal
    //const int *p=x; value reference by p is constant

}

void VoidPointer(){
    void *vp;
    int x=100;
    vp=&x;
    printf("Dereference void pointer:%d\n",*((int *)vp));
}

void DynamicAllocation(){
    int *p;
    int n;

    printf("Enter howmany integers:  ");
    scanf("%d",&n);

    //p=(int *)malloc(n * sizeof(int));
    p=(int *)calloc(n , sizeof(int));
    if(p==NULL){
        printf("Unable to allocate the memory\n");
        exit(1);
    }
    int i;
    for(i=0;i<n;i++){
        printf("Enter next number: ");
        scanf("%d",p+i);
    }

    printf("Contents of the array: ");
    for(i=0;i<n;i++){
        printf("%4d",*(p+i));
    }
    free(p);
}
int ** Dynamic2DArray(int nRows,int nCols){
    int **p;

    p=(int **)malloc(nRows * sizeof(int *));
    if(p==NULL){
        exit(1);
    }
    int i,j;
    for(i=0;i<nRows;i++){
        *(p+i)=(int *)malloc(nCols * sizeof(int));
    }
   return p;
}
void inputValues(int **p,int nRows,int nCols){
    int i,j;
    for(i=0;i<nRows;i++){
        for(j=0;j<nCols;j++){
            printf("Enter value for %d row %d col: ",i,j);
            scanf("%d",(*(p+i)+j));
        }
    }
}
void PrintValues(int **p,int nRows,int nCols){
    int i,j;
    for(i=0;i<nRows;i++){
        for(j=0;j<nCols;j++){
            printf("%6d",*(*(p+i)+j));
        }
        printf("\n");
    }
    FreeMemoryAllocation(p,nRows);
}
void FreeMemoryAllocation(int **p,int nRows){
    int i,j;
    for(i=0;i<nRows;i++){
        free(p+i);
    }
    free(p);
}