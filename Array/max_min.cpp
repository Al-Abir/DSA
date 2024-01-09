#include<bits/stdc++.h>
using namespace std;

void sorting_min_max(int arr[], int n) {
    sort(arr, arr + n);
    int min_val = arr[0];
    int max_val = arr[n - 1];
    cout << "Minimum element is " << min_val << endl;
    cout << "Maximum element is " << max_val << endl;
}
void linear_search(int arr[], int n){
           int min =0; int max =0;
           // if one element
           if(n==1){
               min=max= arr[0];
           }
           // one more element
           if(arr[0]>arr[1]){
            max = arr[0];
            min = arr[1];
           }else{
                max = arr[1];
                min = arr[0];
           }
           for(int i =2; i<n; i++){
               if(arr[i]>max){
                max = arr[i];
               }else if(arr[i]<min){
                min= arr[i];
               }

           }
           cout<<min<<" "<<max;


}
int main() {
    int arr[] = {10, 20, 5, -22, 43, 50};
    int length = 6;
    //sorting_min_max(arr, length);
    linear_search(arr, length);
    return 0;
}