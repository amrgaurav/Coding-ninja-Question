#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
     int i=0;
     int res=0;
     while(i*i<=n)
     {
        res=i;
        i++;
     }
     cout<<res;
}