#include<stdio.h>
#include<time.h>
#include<stdlib.h>

clock_t start,end;
double mytime;
unsigned long K=200;
int MSS(int Arr[],int Num);
double TimeTest(int (*ptr)(),unsigned long MAX);

int main()
{
  //  int Arr[6]={-2,11,-4,13,-5,-2};
    //printf("%lu\n",clock()/CLOCKS_PER_SEC);
    printf("test\n");
    printf("%f",TimeTest(MSS,K));
    return 0;
}

double TimeTest(int (*ptr)(),unsigned long MAX)
{
    int Arr[6];
    start = clock();
    for(int i = 0;i<MAX;++i)
    {
        for(int j = 0;j<6;++j)
             Arr[j] = rand();
        (*ptr)(Arr,MAX);
    }
    end = clock();
    return (double)(end-start)/CLOCKS_PER_SEC;
}


int MSS(int Arr[],int Num)
{
    int ThisSum=0, MaxSum=0;
    for(int i=0;i<Num;++i)
    {
        ThisSum += Arr[i];
        if(ThisSum<0) ThisSum = 0;
        else if(ThisSum>MaxSum) MaxSum = ThisSum;
    }
    return MaxSum;
}
