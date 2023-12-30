#include<bits/stdc++.h>
using namespace std;
 void swap(int &a, int &b)
 {
    int temp;
     temp = a;
      a = b;
      b = temp;
 }
void display(int *a, int size){
        for(int i=0;i<size;i++){
            cout<<a[i]<< " ";
           
        }
         cout<<endl;
}
void selection_sort(int a[], int size)
{
    int min;
    for(int i =0; i<size-1;i++){
        min=i;
        for(int j=i+1; j<size;j++){
            if(a[j]<a[min])
               min=j;

               swap(a[i], a[min]);

        }

    }


}




int main(){
       int n;
       cout<<"Enter The number of element ";
       cin>>n;
       int arr[n];
       for(int i =0; i<n;i++){
           cin>>arr[i];
       }
       cout<<"After Unsorted array ";
       display(arr,n);
       selection_sort(arr, n);
       
     cout << "Array after Sorting: ";
     display(arr, n);

    return 0;
}
