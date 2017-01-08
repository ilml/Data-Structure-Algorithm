/*************************************************************************
	> File Name: main.c
	> Author: 
	> Mail: 
	> Created Time: Sun Jan  1 00:34:53 2017
 ************************************************************************/

#include<stdlib.h>


#ifndef _List_H
#define _List_H
struct node;
typedef int Elemtype;
typedef struct node *PtrNode;
typedef PtrNode Position;
typedef PtrNode List;
#define SIZE sizeof(struct node) 
//typedef sizeof(struct node) SIZE;
#endif

struct node{
    Elemtype Data;
    Position Next;
};
int IsEmpty(List L){
    return L->Next==NULL;
}

int IsLast(Position X, List L){
    return X->Next == NULL;
}

Position Find(Elemtype X,List L){
    Position P;
    P = L->Next;
    while(P!=NULL && P->Data!=X)
        P = P->Next;
    return P;
}

Position FindPrevious(Elemtype X, List L){
    Position P = L;
    while(P->Next!=NULL && P->Next->Data!= X)
        P = P->Next;
    return P;
}

void Delete(Elemtype X, List L){
    Position TemCell,P;
    P = FindPrevious(X,L);
    if(IsLast(P,L)){
        TemCell = P->Next;
        TemCell->Next = TemCell->Next;
        free(TemCell);
    }
}

void Insert(Elemtype X, List L, Position P){
    Position TemCell;
    TemCell = malloc(SIZE);
    if(TemCell==NULL)
        FatalError("Out Of Space!");
    TemCell->Data = X;
    P->Next = TemCell;
    TemCell->Next = P->Next;
}

void DeleteList(List L){
    Position P,Tmp;
    P = L->Next;
    L->Next = NULL;//Delete Header 
    while(P!=NULL){
        Tmp = P->Next;
        free(P);
        P = Tmp;
    }
}


