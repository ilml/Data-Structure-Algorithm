/*************************************************************************
	> File Name: main.c  Binary Search
	> Author: 
	> Mail: 
	> Created Time: Thu Nov 17 11:10:51 2016
 ************************************************************************/

#include<stdio.h>
int BS(const int*,const int,const int,const int );
int BS1(const int*,const int,const int);
int main(){
    const int size=5;
    const int arr[]={1,2,3,4,5,7};
    printf("Test:%d",BS1(arr,6,1));
    
    return 0;
}


int BS(const int* arr,const int left,const int right,const int num ){
    int center = (left+right)/2,i=-1;
    if(left==right)
        if(arr[left]==num)
            i=left;
    if(num>arr[center])
        BS(arr,center+1,right,num);
    else if(num<arr[center])
        BS(arr,left,center-1,num);
    else if(arr[center]==num) 
        i=center;
    return i;
}


int BS1(const int* arr, const int N,const int num ){
    int low=0,high=N-1,center;
    while(low<=high){
        center=(low+high)/2;
        if(arr[center]<num)        
            low=center+1;
        else if(arr[center]>num)
            high=center-1;
        else
            return center;
    }
    return -1;
}
