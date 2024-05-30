//Given an array, predict if the array contains duplicates or not.
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
    for(int i=0;i<=n-2;i++)
    {
        int k=a[i];
        for(int j=i+1;j<=n-1;j++)
        {
            if(k==a[j])
            {
                flag=true;
             }
        }
  
    }
    if(flag==true)
    {
        cout<<"Duplicate present!";
    }
    else{
        cout<<"duplicate not present.";
    }
    return 0;
    
}