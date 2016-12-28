/*************************************************************************
	> File Name: main2.c
	> Author: 
	> Mail: 
	> Created Time: Wed Dec 28 15:58:08 2016
 ************************************************************************/

#include<stdio.h>
void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b =temp;
}



int Partition(int *a,int left,int right,int pivotIndex){
    int storedIndex = left;
    swap(&a[right],&a[pivotIndex]);
    for(int i=left;i<=right-1;++i){
        if (a[i]<=a[right]){
            swap(&a[i],&a[storedIndex]);
            storedIndex += 1;            
        }
    }
    swap(&a[storedIndex],&a[right]);
    return storedIndex;
}


void Quick_Sort(int *a,int left, int right){
    if (right>left){
        int pivotIndex=left+1; 
        int pivotIndexnew= Partition(a,left,right,pivotIndex);
        Quick_Sort(a,left,pivotIndexnew-1);
        Quick_Sort(a,pivotIndexnew+1,right);
    }
}


int main(){
    int a[] = {5,43,2,1};
    Quick_Sort(a,0,3);
    for(int i=0;i<=3;++i)
        printf("%d\t",*(a+i));
    return 0;
}



