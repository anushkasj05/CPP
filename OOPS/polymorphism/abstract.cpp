// abstract class
// pure virtual function
#include<iostream>
using namespace std;
class jlu{
    public :virtual void exam()=0;
};
class jsca:public jlu{
    public:void exam(){
        cout<<"JSCA";
    }
};
class jsen:public jlu{
    public:void exam(){
        cout<<"JSEN";
    }
};
int main()
{
    jlu *jlu;
    jsca jsca;
    jsen jsen;
    jlu=&jsca;
    jlu->exam();
    jlu=&jsen;
    jlu->exam();
}