#include<stdio.h>
int nextPrimeDigit(int digit){
    int primeDigits[]={2,3,5,7};
    for(int i=0;i<4;i++){
        if(digit==primeDigits[i]){
            return digit;
        }
    }
    for(int i=0;i<4;i++){
        if(digit<primeDigits[i]){
            return primeDigits[i];
        }
    }
    return 2;
}
int incrementToPrimeDigits(int N){
    int result=0,place=1;
    while(N>0){
        int digit=N%10;
        int newDigit=newPrimeDigit(digit);
        result=newDigit*place+result;
        place*=10;
        N/=10;
    }
    return result;
}