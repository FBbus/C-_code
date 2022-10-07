#include<iostream>
#include<cstring>
using namespace std;
int main()
{
int i, j, max_names, max_letters;  
max_names=5;
max_letters=10;
char names[max_names][max_letters], temp[max_letters];

cout<<"Enter any 5 names  : ";
  
for(i=0; i<max_names; i++)
    {
    cin>>names[i];
    }
  
for(i=max_names; i>=0; i--)
    {
    for(j=0; j<=i; j++)
        {
        if(strcmp(names[j], names[j+1])>0)
            {
            strcpy(temp, names[j]);
            strcpy(names[j], names[j+1]);
            strcpy(names[j+1], temp);
            }
        }
    }
cout<<"Names in order : \n";

for(i=0; i<=max_names; i++)
    {
    cout<<names[i]<<"\n";
    }

return 0;
}