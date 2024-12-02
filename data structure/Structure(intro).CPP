/*
function is not secure
--> According to c language,structure is a collection of a user defined datatypes but accroding to cpp, structure is collection of user defined datatype as well as user defined functions.
--> character can not be initialized after wards
Data Structure
*/
#include<iostream>
#include<string.h>
using namespace std;
struct cybrom
{
    int age;
    char name[20];
    // string name;
}c;
int main()
{
//  struct cybrom c;
 c.age=20;
 cout<<c.age<<endl;
//  cin>>c.name;
//  cout<<c.name<<endl;
strcpy(c.name,"bhopal");
cout<<c.name<<endl;
//  c.name="bhopal";
//  cout<<c.name;
}