// #include<bits/stdc++.h>
// using namespace std;
// void print1(int n){

//      for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//      } 
// }
// void print2(int n){
//       for(int i=1; i<=n; i++){
//          for(int j=0; j<i; j++){
//             cout<<"* ";
//          }
//          cout<<endl;
//       }

// }
// void print3(int n){
//       for(int i=n; i>=1; i--){
//          for(int j=0; j<=i; j++){
//             cout<<"* ";
//          }
//          cout<<endl;
//       }

// }
// void print4(int n){
   
//    for(int i =1;i<=2*n-1; i++)
//    {
//       int star =i;
//       if(i>n) star = 2*n-i;
//       for(int j=1; j<=star; j++){
//          cout<<"*";
//       }
//       cout<<endl;


//    }


// }
// int main(){

//      int t;
//      cin>>t;
//      for(int i=0; i<t; i++){
//         int n;
//         cin>>n;
//          //print2(n);
//           //print2(n);
//           print4(n);
//      }

//     return 0;
// }

#include <iostream>

int main() {
    int n = 4; // Number of rows (adjust as needed)

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <= i; ++j) {
            if ((i + j) % 2 == 0) {
                std::cout << "1 ";
            } else {
                std::cout << "0 ";
            }
        }
        std::cout << "\n";
    }

    return 0;
}
