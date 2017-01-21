//
// Created by Rainy on 1/20/17.
//


#include <iostream>
#include <stdlib.h>    // Need random(), srandom()
#include <time.h>      // Need time()
#include <algorithm>   // Need sort(), copy()
#include <vector>      // Need vector

using namespace std;

void Display(vector<double> & A,const char *s);
int main(){
    srandom(time(NULL));
    vector<double> myvec(10);
    for(int i=0;i<10;++i)
        myvec[i] = random()%100;
    Display(myvec,"Before Sort");
    sort(myvec.begin(),myvec.end());
    Display(myvec,"Before Sort");
    return 0;

}


void Display(vector<double> & A,const char *s){
     cout<<endl<<s<<endl;
     copy(A.begin(),A.end(),ostream_iterator<double>(cout,"\t"));
     cout<<endl;
}
