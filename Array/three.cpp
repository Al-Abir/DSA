#include<bits/stdc++.h>
using namespace std;
void find_three_element(int a[],int array_size){
   int first, second,third,i;
     if(array_size<3){
        printf("Input Invaild");
     }
     first= second = third =INT_MIN;
     for(int i=0 ; i<array_size; i++){
        if(a[i]>first){
           third=second;
           second= first;
           first = a[i];
        }
        else if(a[i]>second){
            third=second;
            second=a[i];

        }
        else if(a[i]>third)
               third=a[i];
     }
     cout<<first<<" " << second << " "<< third <<endl;

}
int main()
 {
    int a[]={10,20,30,50,35,70,40};
    int n= sizeof(a)/sizeof(int);
    find_three_element(a,n);




    return 0;
 }
