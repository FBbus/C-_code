#include <iostream>

using namespace std;

int main()
{

int first, last;

first=0;
last=0;

cout<<"give the first number";
cin>>first;
cout<<"give the last number";
cin>>last;

if(first>last)
    {
    int temporary = first;
    first = last;
    last = temporary;
    }
    
int i, j;
    
for(i=first;i<last;i++)
    {
    for(j=2;j<i;j++)
        {
        if(i%j == 0)
            {
            break;
            }
        }
    if(i == j)
        {
        cout<<i<<" ";   
        }
    }

    return 0;
}