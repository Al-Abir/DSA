#include<bits/stdc++.h>
using namespace std;

void Second_largest(int[],int);//function prototype


int main(){


    int a[]={10,20,40,50,35};
    int n = sizeof(a)/sizeof(a[0]);
    cout<<n<<endl;
    Second_largest(a,n);
    return 0;
}
void Second_largest(int a[], int array_size)
{
      int first,second,i;
      first=second=INT_MIN;
      for(int i=0;i<array_size;i++)
      {
        if(a[i]>first)
        {
           second=first;
           first=a[i];
        }
        else if(a[i]>second && a[i]<first)
        {
             second =a[i];
        }
 
       
  
      }
      cout<<"second largest value "<<second ;


}
