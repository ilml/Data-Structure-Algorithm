/*************************************************************************
	> File Name: Employee.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon Jan  9 17:07:30 2017
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;


template <class obj>
class Employee{
    public:
        void SetValue(const string &n, obj s){
            name = n;
            salary = s;
        }
        const string & getName() const{
            return name;
        } 
        void print (ostream & output) const{
            output<<"name:"<<name<<endl<<"salary:"<<salary<<endl;
        } 
    private:
        string name;
        obj salary;
};
ostream & operator<< (ostream & out,const Employee<int>  & e){
    e.print(out);
    return out;
}

int main(){
    Employee<int> e1;
    e1.SetValue("Tom",2000);
    cout<<e1<<endl;
    return 0;
}
