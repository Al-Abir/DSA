#include<bits/stdc++.h>
using namespace std;
void abc(int &a, int &b)
{
     int temp=a;
        a=b;
        b=temp;
    
}

void display(int *a,int size)
{
    for(int i =0; i<size;i++){
        printf("%d ",a[i]);
    }
   printf("\n");

}
void selection_sort(int a[],int size)
{
     
    for(int i=0; i<size-1;i++){
        for(int j=i+1;j<size;j++){
            int min =i;
            if(a[i]>a[j])
            {
                min=j;
                abc(a[i],a[min]);
            }
        }
    }



}


int main(){

     int n;
     scanf("%d",&n);
     int arr[n];
    printf("Please Input the number\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("Unsorted Array\n");
    display(arr,n);
    selection_sort(arr,n);
    printf("Sorted Array \n");
    display(arr,n);


    return 0;
}