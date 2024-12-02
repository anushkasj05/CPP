//  wap to find the number of objects made of class atmcard
#include<iostream>
using namespace std;
class atmcard
{
    static int c;
    public:atmcard()
    {
        c++;
        cout<<c;
    }

};
int atmcard::c=0;
int main()
{
    atmcard a1,a2,a3;
}