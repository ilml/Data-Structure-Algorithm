#include<stdio.h>

void PrintSG(char Symbol,int Row);
int GetSum(int N);
int GetMaxRow(int N,int *Res);
int main(){
    int a,Input,Row;
    char Sym;
    scanf("%d %c",&Input,&Sym);
    Row = GetMaxRow(Input,&a);
    PrintSG(Sym,Row);
    //printf("%d\t",GetSum(Input));
    printf("%d",a);
    return 0;
}

void PrintSG(char Symbol,int Row)
{
    int i,j,k;
    for(int i=Row;i>=1;--i)
    {
        for(j=0;j<Row-i;++j)
            printf(" ");
        for(k=1;k<=2*i-1;++k)
            printf("%c",Symbol);
        printf("\n");
    }
    for(int i=2;i<=Row;++i)
    {
        for(j=0;j<Row-i;++j)
            printf(" ");
        for(k=1;k<=2*i-1;++k)
            printf("%c",Symbol);
        printf("\n");
    }
}


int GetMaxRow(int N,int *Res){
    int n = 1;
    while(1)
    {
        if(GetSum(n)==N)
        {
            *Res = 0;
            return n;
        }
        if(GetSum(n+1)>N)
        {
            *Res = N-GetSum(n);
            return n;
        }
        n+=1;
    }
}

int GetSum(int N)
{
    int sum = 0;
    for(int i=1;i<=N;++i)
         sum+=2*i-1;
    return 2*sum-1;
}
