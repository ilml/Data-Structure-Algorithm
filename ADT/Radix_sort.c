/*************************************************************************
	> File Name: Radix_sort.c
	> Author: 
	> Mail: 
	> Created Time: Sat Jan  7 21:27:00 2017
 ************************************************************************/

#include<stdio.h>
#include<math.h>

int Get_Pos(int n,int pos){
    return n%pow(10,pos);
}

int *Sort_One(int *arr,int N){
    int bucket[10];
    for(int i=0;i<N;++i){
        bucket[Get_Pos(arr[i],1)] = arr[i];
    }
    return bucket;
}

int *Sort_Two(int *arr,int N){
      
     
}
