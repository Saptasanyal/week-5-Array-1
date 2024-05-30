//Find the second largest element in the given Array in one pass.
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
    int first=0, second=-1;
    for(int i=1;i<=n-1;i++)
    {
        if(a[first]<a[i])
        {
            second=first;
            first=i;
        }
        else if(a[first]>a[i])
        {   
            if(a[second]<a[i]||second==-1)
            second=i;
        }
    }
    cout<<a[second];
    return 0;
}