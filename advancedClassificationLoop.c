#include "NumClass.h"
#include <math.h>
#include <stdio.h>


int isPalindrome(int n){
    int rem = 0;
    int num = n;
    int res = 0;
    while(num!=0){
        rem = num%10;
        res = res*10 + rem;
        num = num/10;
    }
    return res==n;

}

int isArmstrong(int n){
    if(n<0) return 0;

    int tmpN1 = n;
    int tmpN2 = n;
    int dig = 0;
    int res = 0;
    while(tmpN1!=0){
        dig++;
        tmpN1 = tmpN1/10;
    }
    while(tmpN2!=0){
        int q = tmpN2%10;  
        res = res + (pow(q,dig)); 
        tmpN2 = tmpN2/10;
    }

    return res == n;

}

