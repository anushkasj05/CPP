// // initializer list is used to reinitialize the const variable it is initialized at run time
// #include<iostream>
// using namespace std;
// class RBI
// {
//     const int a;
//     public:void show()
//     {
//         cout<<a;
//     }
// };
// int main()
// {
//     RBI obj;
//     obj.show();
// }
#include<iostream>
using namespace std;
class RBI
{
    const int rate,amount;
    public:RBI (int r,int a ):rate(r),amount(a)
    {
        cout<<rate<<"\n";
        cout<<amount<<"\n";
    }
};
int main()
{
    RBI sbi(10,10000);
    RBI axis(20,12000);
    return 0;
}