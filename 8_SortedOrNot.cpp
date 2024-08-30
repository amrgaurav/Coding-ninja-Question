#include<bits/stdc++.h>
using namespace std;
bool checkSorted(int arr[],int n)
{
    int j=0;
    for(int i=1;i<n;i++)
    {
        if(arr[j]<arr[i])
        {
            if(arr[j]>arr[i])
            {
                j++;
            }
             else{return false;}
        }
        else{
              if(arr[j]<arr[i])
            {
                j++;
            }
             else{return false;} 
        }
    }
   return true; 
}
int main()
{
    int arr[]={-2,-5,6,-90};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<checkSorted(arr,n);
}