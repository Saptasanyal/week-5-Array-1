//Find the minimum value out of all elements in the array.
#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of element you want: ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array: ";
    for(int j=0;j<=n-1;j++)
    {
        cin>>a[j];
    }
    int k=INT_MAX;
    
    for(int i=0;i<=n-1;i++)
    {
        if(k>a[i])
        {
            k=a[i];
        }
    }
    cout<<k;
    return 0;
    
}