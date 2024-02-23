#include<iostream>
using namespace std;
int main(){
    int a=2;
    int *p1=&a;
    int **p2=&p1;
    (**p2)++;
    cout<<a<<endl;
}