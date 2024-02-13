/* 

      *
    * *
  * * *
* * * *


*/
// #include<iostream>
// using namespace std;
// int main(){

// int n;
// cout<<"enter the number";
// cin>>n;

// int i = 1 ;

// while(i<=n){
//   //print space
//    int space = n-i;
//   while(space){
//   cout<<"  ";
//   space--;
//   }
// //print stars 
//   int j = 1;
//   while(j<=i){
//     cout<<"*";
//     j++;
//   }
//   cout<<endl;
//   i++;
// }
// }

/* 

* * * *
  * * *
    * *
      *                    */

#include<iostream>
using namespace std;
int main(){

int n;
cout<<"enter the number";
cin>>n;

int i = 1 ;

while(i<=n){
  //print space
  int space = i - 1;
  while(space){
  cout<<" ";
  space++;
  }
  int j = 1;
  while(j<=n){
     
    cout<<"*"<<(n - i + 1);
    j++;
  }
  cout<<endl;
  i++;
}
}

