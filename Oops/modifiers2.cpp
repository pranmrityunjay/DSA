#include<iostream>
using namespace std;
class Animal{
    public:
    string color;
    int wieght;

};
 // in cpp parent class attribute will be modified by any method

class pig : public Animal{
    public:
    void setAttribute(string color){
        this->color=color;
    
    }
};
int main(){
    pig p1;
    p1.setAttribute("red");
    cout<<p1.color<<endl;

}

