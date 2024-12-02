# include <iostream>
# include <thread>
using namespace std;
void sum()
{
    for(int i=0;i<=10;++i)
    {
        cout<<i;
    }

    cout<<"\n";
}


void display()
{
      for(int i=0;i<=100;++i)
    {
        cout<<i;
    }
}


int main()
{


thread t1(sum);
thread t2(display);

t1.join();
t2.join();


}