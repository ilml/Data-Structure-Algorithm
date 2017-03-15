#include<stdio.h>
#include<time.h>
#include<stdlib.h>

clock_t start,end;
double mytime;
unsigned long K=20;
int MSS(int Arr[],int Num);
int MSS1(int Arr[],int Num,int *head,int *tail);
double TimeTest(int (*ptr)(),unsigned long MAX);

int main()
{
    int num;
//    int Arr1[6]={-10,-10,17,-21,14,12};
//    int Arr1[10]={-10, 1 ,2, 3 ,4 ,5 ,-23 ,3 ,7 ,-21};
    int head,tail;
    //printf("%lu\n",clock()/CLOCKS_PER_SEC);
//    printf("test\n");
//    scanf("%d",&num);
 //   for(int i=0;i<num;++i)
  //      scanf("%d",&Arr[i]);

	scanf("%d",&num);
    int Arr[num];
    for(int i=0;i<num;++i)
		scanf("%d",&Arr[i]);

//    printf("%d\n",MSS(Arr,num));
    printf("%d %d %d",MSS1(Arr,num,&head,&tail),head,tail);
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
   int thishead,thistail;
   thishead = Arr[0];
   for(int i=0;i<Num;++i)
    {
        ThisSum += Arr[i];
        thistail = Arr[i];
        if(ThisSum<0)
        {
            ThisSum = 0;
            if(i<(Num-1))
                thishead = Arr[i+1];
            thistail = thishead;
        }
        else if(ThisSum>MaxSum)
        {
            MaxSum = ThisSum;
            *tail = thistail;
            *head = thishead;
        }
    }
    if(MaxSum==0)
    {
        *head = Arr[0];
        *tail = Arr[Num-1];
    }
    return MaxSum;
}





