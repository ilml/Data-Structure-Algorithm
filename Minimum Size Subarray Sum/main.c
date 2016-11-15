#include <stdio.h>
int minSubArrayLen(int , int* , int );
int main(){
	int s=8;
	int arr[6]={2,3,1,2,4,4};
	printf("size=%d\n",minSubArrayLen(s,arr,6));
}




int minSubArrayLen(int s, int* nums, int numsSize) {
	int size=0;
	for(int i=2;i<=numsSize;++i){  //size
		for(int j=0;j<=numsSize-i;++j){ //location
			int sum=0;
			for(int k=j;k<j+i;++k)  //sum   
				sum+=nums[k];
			if(sum>=s){
				size=i;
 			        return size; 
         		   }
			}
	    }
	return size;
}
/*
int arr_sum(*arr,arr_size){
	int sum=0;
	for(int i=0;i<arr_size;++i){
		sum+=i;
	}
	return sum;
}
		
*/
