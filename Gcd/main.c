/*************************************************************************
	> File Name: main.c  Gcd
	> Author: 
	> Mail: 
	> Created Time: Thu Nov 17 14:50:40 2016
 ************************************************************************/

#include<stdio.h>
unsigned int Gcd(unsigned int,unsigned int);
int main(){
    unsigned int a ,b;
    a = 19891234;
    b = 159017;
    printf("Rem=%d",Gcd(a,b));
}
   

unsigned int Gcd(unsigned int a,unsigned int b){
    unsigned int rem;

    while(b>0){
        rem = a%b;
        a=b;
        b=rem;
    }
   
    return a;
    
}
