#include<bits/stdc++.h>
using namespace std;
class Student{
    protected:
    string name="mrityunay";
    int age=21;
    string color="brown";
    string address="Bihar";


};

class section: public Student{
    public:
    float marks=88.5;
    void print(){
    cout<<this->color<<endl;
    }
};
int main(){
    section A;
    cout<<A.marks<<endl;
    cout<<"main function "<<A.marks<<endl;
    //cout<<A.color<<endl;
    //A.print();

    


}