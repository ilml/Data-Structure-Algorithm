/*************************************************************************
	> File Name: IntCell.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun Jan  8 14:20:13 2017
 ************************************************************************/

#include<iostream>
#include"IntCell.h"
#include<vector>
using namespace std;

IntCell::IntCell(int Ini):storedval(Ini)
{
}

int IntCell::read() const{    
     return storedval;
}


void IntCell::write(int x){
    storedval = x;
}

const int & findMax(const vector<int> & arr){
    int Index = 0;

    for(int i=0;i<arr.size();++i){
        if(arr[i]<arr[Index])
            Index = i;
    }
     return arr[Index];
}
int main(){
     vector<int> square(10);
     IntCell *m;
//     m = new IntCell(3); 
         
//     IntCell obj(3);
    // obj.write(4);
 //    cout<<m->read()<<endl;
     for(int i=0;i<square.size();++i){
         square[i] = i*i;
     }
     for(int i=0;i<square.size();++i){
         cout<<square[i]<<endl;
     }     
     delete m;
     return 0;
}
