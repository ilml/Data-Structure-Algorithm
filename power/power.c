/*************************************************************************
	> File Name: power.c
	> Author: 
	> Mail: 
	> Created Time: Thu Nov 17 15:43:04 2016
 ************************************************************************/

#include<stdio.h>
int mypow(unsigned const int,unsigned const int);
int mypow1(unsigned const int,unsigned const int);
int iseven(unsigned int);
int main(){
    int a,b;
    a = 3;
    b=4;
    printf("power=%d",mypow1(a,b));
}


int mypow(unsigned const int p,unsigned const int n){
    if(n==1)
        return p;
    return mypow(p,n-1)*p;
}




int mypow1(unsigned const int p,unsigned const int n){
    if(n==0)
        return 1;
    if(iseven(n))
        return mypow1(p*p,n/2);
    else
        return mypow1(p*p,n/2)*p;
}

int iseven(unsigned int n){
    if(n%2)   
        return 0;
    else
        return 1;
}
