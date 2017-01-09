/*************************************************************************
	> File Name: IntCelltest.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun Jan  8 14:46:45 2017
 ************************************************************************/

#include<iostream>
#include"IntCell.h"
using namespace std;


int main(){
     IntCell obj;
     obj.write(4);
     cout<<obj.read()<<endl;
     return 0;
}
