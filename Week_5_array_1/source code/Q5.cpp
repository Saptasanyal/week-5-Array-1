//WAP to find the smallest missing positive element in the sorted Array 
// that contains only positive elements.
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
    bool flag=false;
    int k;
    for(int j=1;j<=n-1;j++)
    {
        if(a[j]!=a[j-1]+1)
        {
            flag=true;
            k=a[j-1]+1;
            break;
        }
    }
    if(flag==true)
    {
        cout<<"missing smallest positive element is: "<<k;
    }
    else{
        cout<<"No element is missing";
    }
    return 0;
}