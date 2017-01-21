//
// Created by Rainy on 1/20/17.
//


#include <iostream>
#include <algorithm>
#include <list>


using namespace std;
int myarr[5] = {1,2,3,4,5};
void Display(const list<int> & L,const string & a);

int main(){
    list<int> mylist;
    copy(myarr,myarr+5,back_inserter(mylist));
    Display(mylist,"Before");
    list<int>::iterator p =find(mylist.begin(),mylist.end(),2);
    copy(myarr,myarr+2,inserter(mylist,p));
    Display(mylist,"After");
    list<int> iList = mylist;
    list<int>::iterator i =
            find(iList.begin(), iList.end(), 2);
    cout << "before: p == " << *i << endl;
    advance(i, 2);  // same as p = p + 2;
    cout << "after : p == " << *i << endl;
    return 0;
}


void Display(const list<int> & L,const string & a){
    cout<<endl<<a<<endl;
    copy(L.begin(),L.end(),ostream_iterator<int>(cout,"\t"));
}
