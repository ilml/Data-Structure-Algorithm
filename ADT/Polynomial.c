/*************************************************************************
	> File Name: Polynomial.c
	> Author: 
	> Mail: 
	> Created Time: Thu Jan  5 06:33:02 2017
 ************************************************************************/

#include<stdio.h>
#include<main.h>


typedef struct Node *PtrNode;

struct Node{
   Elemtype Coeff;
   Elemtype Expo;
   PtrNode Next;
};


