#include<bits/stdc++.h>
using namespace std;
int main(){

    int a[10];
    //int n = sizeof(a)/sizeof(int);
    //cout<<n<<endl;
    int pos,num,size;
    cout<<"Enter the size ";
    cin>>size;
    //scanf("%d",&size);
    for(int i=0;i<size;i++){
        cin>>a[i];
        //scanf("%d",a[i]);
    }
    cout<<"Input the position ";
    cin>>pos;
    cout<<"Input the Number ";
    cin>>num;
    for(int i=size-1; i>=pos;i--){
       a[i+1]=a[i];      
       
    }
        a[pos]=num;
   
    cout<<"New Array\n";
    for(int i=0;i<=size;i++){
        cout<<a[i]<<" ";
    }



    return 0;
}