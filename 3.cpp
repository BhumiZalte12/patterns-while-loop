//print pattern of 
// * * * *
// * * * *
// * * * *
// * * * *

#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"enter the number";
cin>>n;

int i = 1; //row
while (i<=n){   //will go to n ex.3 (1,2,3)
 int j=1;  //column
   while( j<= n){     
    cout<<"*";
    j++;
   }
   cout<<endl; 
i++;
}






}