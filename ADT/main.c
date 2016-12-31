/*************************************************************************
	> File Name: main.c
	> Author: 
	> Mail: 
	> Created Time: Sun Jan  1 00:34:53 2017
 ************************************************************************/

#include<stdio.h>

struct node;
typedef int Elemtype;
typedef struct node *PtrNode;
typedef PtrNode Position;
typedef PtrNode List;


struct node{
    Elemtype Data;
    Position Next;
};
int IsEmpty(List L){
    return L->Next==NULL;
}
