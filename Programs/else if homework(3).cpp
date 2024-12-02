#include<iostream>
using namespace std;

int main()
{
    int physics, chemistry, maths;

    cout << "Enter marks in Physics (out of 100): ";
    cin >> physics;

    cout << "Enter marks in Chemistry (out of 100): ";
    cin >> chemistry;

    cout << "Enter marks in Maths (out of 100): ";
    cin >> maths;
    
    int total = physics + chemistry + maths;
    float percentage = total / 3.0;
    
    if (physics < 0 || chemistry < 0 || maths < 0) 
    {
        cout << "Invalid input! Marks cannot be negative.";
        return 0;
    }
    if (physics>100 )
    {
        cout<<"invalid marks in physics"<<endl;
        if (chemistry>100)
        {
            cout<<"invalid marks in chemistry"<<endl;
        }
        if (maths>100)
        {
            cout<<"invalid marks in maths "<<endl;
        }
    }
    
    if (physics < 35 && chemistry>35 && maths>35) 
    {
        cout << "Failed in Physics." << endl;
    }
    else if (chemistry < 35 && physics>35 && maths>35)
    {
        cout << "Failed in Chemistry." << endl;
    }
   else if(maths<35 && physics>35 && chemistry>35)
    {
        cout << "Failed in Maths." << endl;
    }
    else if ((physics<35 && chemistry<35 && maths >35) || (chemistry<35 && maths<35 && physics>35) || (maths<35 && physics<35 && chemistry>35))
    {
        cout<< "failed in two subjects"<<endl;
    }
    else if (physics<35 && chemistry<35 && maths<35)
    {
        cout<<"failed in all the three subjects"<<endl;
    }
    else if (percentage >= 60 && percentage <= 100) 
    {
        cout << "Total marks: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;
        cout << "First Division." << endl;
    }
    else if (percentage >= 50 && percentage < 60) 
    {
        cout << "Total marks: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;
        cout << "Second Division." << endl;
    } 
    else if (percentage >= 35 && percentage < 50) 
    {
        cout << "Total marks: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;
        cout << "Third Division." << endl;
    }
      return 0;
}