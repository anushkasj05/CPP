#include<iostream>
using namespace std;
int main()
{
    char d;
    cout<<"enter a character ";
    cin>>d;
    if( d=='a' || d=='e' || d=='i' || d=='o' || d=='u' || d=='A' || d=='E' || d=='I' || d=='O' || d=='U')
    {
        cout<<"it is a vowel";
    }
    else
    {
        cout<<"it is a consonant"; 
    }
}