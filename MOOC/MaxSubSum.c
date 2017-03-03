#include<stdio.h>
#include<time.h>
#include<stdlib.h>

clock_t start,end;
double mytime;
unsigned long K=200;
int MSS(int Arr[],int Num);
int MSS1(int Arr[],int Num,int *head,int *tail);
double TimeTest(int (*ptr)(),unsigned long MAX);

int main()
{
    int Arr[6]={-3,11,-4,13,-5,-2};
    int head,tail;
    //printf("%lu\n",clock()/CLOCKS_PER_SEC);
   // printf("test\n");
    printf("%d\t%d\t%d",MSS1(Arr,6,&head,&tail),head,tail);
   // printf("%f",TimeTest(MSS,K));
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


int MSS1(int Arr[],int Num,int *head,int *tail)
{
    int ThisSum=0, MaxSum=0;
    for(int i=0;i<Num;++i)
    {
        ThisSum += Arr[i];
        if(ThisSum<0)
        {
            if(i==(Num-1))
            {
                *head = Arr[0];
                return 0;
            }
            else
            {
            ThisSum = 0;
            *head = Arr[i+1];
            *tail = *head;
            }
        }
        else if(ThisSum>MaxSum)
        {
            MaxSum = ThisSum;
            *tail = Arr[i];
        }
    }
    return MaxSum;
}






