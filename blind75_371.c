/*
 -------------------------------------
 File:    blind75_371
 -------------------------------------
 AUTHOR:  Rhyme
 VERSION:  2022-12-07
 TITLE:   Blind 75 → 371. Sum of Two Integers
 CHALLENGE: Given two integers a and b, return the sum of the two integers without using the operators + and -.
 -------------------------------------
 */

#include <stdio.h>

int add(int a, int b){
    for (int i = 0; i < b; i++){
        a++;
    }
    return a;
}

int getSum(int a, int b){
    int sum = 0;

    if (a >= -1000 && b <= 1000){
        sum = add(a,b);
        }
        
return sum;
}

void main(){
    int x;
    x = getSum(1,2);
    printf("%d",x);
    return;
}