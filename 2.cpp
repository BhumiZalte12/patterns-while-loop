//sum of array
#include<iostream>
using namespace std;
int main()
{
    int i,n,sum=0;
    float arr[100];
    cout<<"enter total numbers in array ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        
        cout<<"enter number"<<i+1 << ":";
        cin>>arr[i];

    }
    
    for(i=0;i<n;i++)
    {
       sum=sum + arr[i];
    }
      cout<<"total sum in array"<<sum;

    
return 0;


}