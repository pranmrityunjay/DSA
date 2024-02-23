#include<iostream>
using namespace std;
class Student{
    public:
    string name="mrityunjay kumar";
    int age=20;
    string color="brown";
    string address="Bihar";


    Student (){

    }

    Student(int age){
        this->age=age;
    }


};
int main(){
    Student s1;
    Student s2(9);
    cout<<s2.age<<endl;
    cout<<s1.age<<endl;
    
   



}