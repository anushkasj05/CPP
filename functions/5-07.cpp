/*            function
             /        \
        predefined   user-defined       
Recursion-the function that calls itself again and again .
                 Recursion
               /          \
            head         tail
            if the function si called first then printed is called head recursion.
            if the function is called last then printed is called tail recursion.
imp 
bitwise operator
recursive questions are mostly asked in accenture interview
recursion tree
*/
#include<iostream>
using namespace std;
int dsc(int n)
{
    if(n==0)
    {
        return 0;
    }
    // dsc(n-1); // head recursion
    cout<<n<<endl;
    dsc(n-1);  //tail recursion
}
int main()
{
dsc(5);
}