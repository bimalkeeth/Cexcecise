//
// Created by bill on 22/03/19.
//

#include <stdio.h>
#include <functions-01.h>
#include <stdlib.h>
#include <math.h>

void   InterestCapture(){
    double p,r,t,i;
    printf("Enter principle: ");
    scanf("%lf",&p);
    printf("Enter rate of interest: ");
    scanf("%lf",&r);
    printf("Enter duration: ");
    scanf("%lf",&t);
    i=GetSimpleInterest(p,r,t);
    printf("Total interest : $%02lf",i);

}

double GetSimpleInterest(double principle ,double rate , double time){
    double  interest;
    interest=(principle * rate)/100;
    return interest;
}

int IsPrimeNumber(int n){
    int i;
//    for(i=2;i<=sqrt(n);i++){
//       if(n%i==0){
//           return 0;
//       }
//    }
    return 1;
}