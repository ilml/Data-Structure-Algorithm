/*************************************************************************
	> File Name: main.c maximum subarray sum
	> Author:Tom Long 
	> Mail: 
	> Created Time: Tue Nov 15 09:25:49 2016
 ************************************************************************/

#include<stdio.h>
int MSS(const int* , const int );
int MSS4(const int*,const int );
int max3(int a,int b, int c);
int MSS3(const int* ,const int , const int );
static int MSS2(const int* , const int );
int main(){
    int arr[]={4,-3,5,-2,-1,2,6,-2},size=8;
    printf("test\n");
    //printf("Answer:%d\n",MSS2(arr,size));
    printf("Answer:%d\n",MSS4(arr,7));
    return 0;
    
}


int MSS(const int* arr, const int arrsize){
    int  max,i,j,sum;
    for(i=0;i<arrsize;++i){
        sum = 0;
        for(j=i;j<arrsize;++j){
            sum+=arr[j];
            if(sum>max)
                max=sum;
        } 
    }
    return max;
}


static int MSS2(const int* arr, const int arrsize){
    int sum,max,max1,max2,max3,max4,middle=arrsize/2;
    max1 = MSS2(arr,middle);
    max3 = MSS2(arr+middle,arrsize-middle);
    if(arrsize==1){
        if(arr[0]>0)
            return arr[0];
        else
            return 0;
    } 
    sum = arr[middle-1];
    max2=sum;
    for(int i=middle-2;i>=0;--i){
       sum+=arr[i];
       if(max2<sum)
          max2=sum;
    }
    sum = arr[middle];
    max4=sum;
    for(int i=middle+1;i<arrsize;++i){
       sum+=arr[i];
       if(max4<sum)
          max4=sum;
    }


    int maxmid = max2+max4;
    printf("%d,%d,%d",max1,maxmid,max3);
    max = max1>max3?(max1>maxmid?max1:maxmid):(max3>maxmid?max3:maxmid);

    return max;
}

int MSS3(const int *arr,const int left, const int right ){
    int maxleft,maxright,max,center;
    center = (left+right)/2;
    if(left==right) 
        if(arr[left]>0)
           return arr[left];
        else 
            return 0;
    maxleft=MSS3(arr,left,center);
    maxright=MSS3(arr,center+1,right);
    int maxmidleft=0;
    int maxmidright=0;
    int temp=0;
    for(int i=center;i>=left;--i){
        temp+=arr[i];
        if(temp>maxmidleft)
            maxmidleft=temp;
    }
    
    temp=0;
    for(int i=center+1;i<=right;++i){
        temp+=arr[i];
        if(temp>maxmidright)
            maxmidright=temp;
    }
   
    int maxmid=maxmidright+maxmidleft;
    return max3(maxmid,maxleft,maxright);
}

int MSS4(const int* arr,const int N){
    int i,MaxSum=0,ThisSum=0;
    for(i=0;i<N;++i){
        ThisSum+=arr[i];
        if(ThisSum>MaxSum)
            MaxSum=ThisSum;
        else if(ThisSum<0) 
            ThisSum=0;
    }
    return MaxSum;
}

int max3(int a,int b, int c){
    int temp;
    if(a>b)
        temp=a;
    else
        temp=b;
    if(temp>c)
        return temp;
    else
        return c;
}









