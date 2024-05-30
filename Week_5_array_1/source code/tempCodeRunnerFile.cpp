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