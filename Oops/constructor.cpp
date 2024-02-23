#include<bits/stdc++.h>
using namespace std;
class Animal{
    public:
    string type="rabit";
    int weight;
    string color;

   Animal(int p){
        this->weight=p;
        cout<<"constructor called"<<endl;
    }
};
int main(){
    Animal a1(40);
    cout<<a1.weight<<endl;
    a1.color="red";
    cout<<a1.color<<endl;



}