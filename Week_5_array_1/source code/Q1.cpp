//Calculate the product of all the elements in the given array.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elemnts: ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements: ";
    for(int i=0;i<=n-1;i++)
    {
        
        cin>>a[i];
    }
    int prod=1;
    for(int j=0;j<=n-1;j++)
    {
        prod*=a[j];
    }
    cout<<prod;
    return 0;
}