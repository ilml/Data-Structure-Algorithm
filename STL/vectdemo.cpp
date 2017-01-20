//
// Created by Rainy on 1/20/17.
//
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> myvector(10);


int main(){
    myvector[5] = 10;
    vector<int>::iterator ip = find(myvector.begin(),myvector.end(),10);
    if(ip == myvector.end()){
        cout<<"None"<<endl;
    }
    else{
        cout<<"Find:"<<*ip<<endl;

    }
    return  0;
}
