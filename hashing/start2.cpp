#include<bits/stdc++.h>
using namespace std;
class Hashing{
    public:
    vector<list<int>>hashmap;
    int buckets;

    Hashing(int size){
        this->buckets=size;
        hashmap.resize(size);
        
    }


    int hashvalue(int key){
        return key%buckets;
    }

    int add(int key){
        int index=hashvalue(key);
        hashmap[index].push_back(key);
    }

    list<int>:: iterator search(int key){
        int index=hashvalue(key);
        return find(hashmap[index].begin(),hashmap[index].end(),key);


    }

    void Delete(int key){
        int index=hashvalue(key);
        if(search(key)!=hashmap[index].end()){
            hashmap[index].erase(search(key));
            cout<<key<<" is deleted"<<endl;

        }
        else{
            cout<<"key not found"<<endl;
        }
    }

    

};
int main(){

    Hashing* h1=new Hashing(10);
    h1->add(21);
    h1->add(23);
    h1->add(25);
    h1->add(56);
    h1->add(221);
    h1->add(90);
    h1->add(54);
    h1->Delete(57);


}