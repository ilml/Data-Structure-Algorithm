//
// Created by Rainy on 1/20/17.
//


#include <iostream>
#include <vector>

#define SIZE 10

using namespace std;

vector<double> myvec1(SIZE);
double myvec2[SIZE]=
        {1.0, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9};

int main(){
    vector<double>::iterator ip = myvec1.begin();
    copy(myvec2,myvec2+SIZE,ip);   //Won't change ip
    replace(myvec1.begin(),myvec1.end(), 1.5, 3.14159);
    reverse(myvec1.begin(),myvec1.end());
    random_shuffle(myvec1.begin(), myvec1.end());

    while(ip != myvec1.end()){
        cout<<*ip<<endl;
        ++ip;
       // ip++;
    }

    return 0;
}




