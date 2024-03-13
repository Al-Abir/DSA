#include<bits/stdc++.h>
using namespace std;

int Binary_Searce(int array[],int low,int high,int find)
{
    while(low<=high){
        int mid = (low + high)/2;
        if(array[mid]==find)
        return mid;

        else if(array[mid]<find)
             low = mid+1;
        else if(array[mid]>find)
            high= mid-1;     
    }

      return -1;

}

int main(){

      int a[]={10,20,39,40,50};
      int num=40;
      int n = sizeof(a)/sizeof(int);
      int output = Binary_Searce(a,0,n-1,50);
    if(output==-1){
        cout<<" Not found";
    }
    else
      cout<<"found location index "<<output<<endl;

    return 0;
}