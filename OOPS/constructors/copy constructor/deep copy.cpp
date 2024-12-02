// deep copy constructor
#include<iostream>
using namespace std;
class student{
    char *name;
    public:student(char *s){
        name = new char[20];// new ->dynamic memory cation
        strcpy(name,s);// s will be copied in name 
    }
    void display(){
        cout<<name<<endl;
    }
    student(student &ob){// deep copy
        name=new char[20];
        strcpy(name,ob.name);
    }
    void concate(char *s){
        strcat(name,s);
    }
};
int main(){
    student stu("divyansh");
    student stu2(stu);
    stu.concate(" Chaubey");
    stu.display();
    stu2.display();
}