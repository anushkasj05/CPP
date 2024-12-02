// super class
// virtual function
#include<iostream>
using namespace std;
class jlu{
    public: virtual void exam(){
        cout<<"EXAM CELL";
    } 
};
class jsca:public jlu{
    public: void exam(){
        cout<<"EXAM CELL JSCA";
    }
};
class jsen:public jlu{
    public: void exam(){
        cout<<"EXAM CELL JSEN";
    }
};
int main()
{
    jlu *j1;
    jsca j2;
    jsen j3;
    j1=&j2;
    j1->exam();
    j1=&j3;
    j1->exam();
}