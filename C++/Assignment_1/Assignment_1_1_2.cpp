
#include <iostream>

using namespace std;

int main()
{
int j=1,k=1,i=1;

cout<<i<<" "<<j<<" "<<k<<" ";

for(int x=0;x<4;x++)
{
    i=i+j+k;
    cout<<i<<" ";
    
    j=i+j+k;
    cout<<j<<" ";
    
    k=k+j+i;
    cout<<k<<" ";
}
return 0;
}