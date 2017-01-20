#include <iostream>
#include <algorithm>

using  namespace std;

#define SIZE 100

int myarr[SIZE];



int main() {
    myarr[20] = 50;
    int *ip = find(myarr,myarr+SIZE,50);
    if(ip == myarr+SIZE)
        cout<<"None"<<endl;
    else
        cout<<"Find:"<<*ip<<endl;

    return 0;
}