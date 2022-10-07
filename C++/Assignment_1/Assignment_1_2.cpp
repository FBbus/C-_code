#include <iostream>

using namespace std;

int main()
{
int first, second, sum=0;

cout<<"give first number";
cin>>first;

cout<<"give second number";
cin>>second;

cout<<"the numbers between the first number "<<first<<" and last number "<<second<<" are:";
while(first<second-1)
{    
    {
    first++;
    
    sum+=first;
    
    cout<<first<<" ";
    }
}
cout<<endl<<"the sum is: "<<sum;

return 0;
}