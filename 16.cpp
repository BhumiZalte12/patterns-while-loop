//print pattern of 
// A B C
// B C D
// C D E

#include<iostream>
using namespace std;
int main()
{

int n ;
 cout<<"enter the number";
 cin>>n;
 int i =1;

 while(i<=n){
    int j =1;
    int value = i;
    while(j<=n){
        char ch = 'A' + value - 1;
    cout<<ch; 
    value++;
    j++;
       
    }
    cout<<endl;
    i++;
 }
}