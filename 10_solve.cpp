#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int n;
    // cin>>n;
    // for(int i=1;i<=n;i++)
    // {
    //     for(int j=1;j<=i;j++)
    //     {
    //         cout<<i+j-1;
    //     }
    //     cout<<endl;
    // }
    // int n;
    // cin>>n;
    // for(int i=1;i<=n;i++)
    // {
    // 	// int x=i+1;

    // 	for(int j=1;j<=n-i;j++)
    // 	{
    // 		cout<<" ";
    // 	}
    // 	for(int j=1;j<=i;j++)
    // 	{
    //      cout<<i+j-1;
    // 	}
    // 	// for(int k=j;k<n;k++)
    // 	// {
    // 	// 	cout<<x;
    // 	// 	x++;
    // 	// }
    // 	cout<<endl;
    // }
    // int n;
    // cin>>n;
    // 	for(int i=1;i<=n;i++)
    // {
    // 	for(int j=1;j<=n-i;j++)
    // 	{
    // 		cout<<"x";
    // 	}
    // 	for(int j=1;j<=2*i-1;j++)
    // 	{
    // 		cout<<"*";
    // 	}
    // 	cout<<endl;
    // }
    // int n;
    // cin >> n;
    //    for(int i=0;i<n;i++)
    //    {
    //     int k=n-i;
    //     for(int j=0;j<=i;j++)
    //     {
    //         cout<<k;
    //     k++;
    //     }
    // for (int i = n; i >= 1; i--)
    // {
    //     int k = i;
    //     for (int j = n; j >= i; j--)
    //     {
    //         cout << k;
    //         k++;
    //     }
    //     cout << endl;
    // }
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         int k=i;
//         int a=2*i-1;
//         for(int j=1;j<=n-i;j++)
//         {
//           cout<<" ";
//         }
//         for(int j=1;j<=a;j++)
//         {
//             cout<<k;
//            if(j<=a/2)
//            {
//             k++;
//            }
//            else{k--;}
//         }
//         cout<<endl;
//     }
//         1
//    232
//   34543
//  4567654
// 567898765
int n;
cin>>n;
int m=(n+1)/2;
for(int i=1;i<=m;i++)
{
    for(int j=1;j<=m-i;j++)
    {
        cout<<" ";
    }
    for(int j=1;j<=2*i-1;j++)
    {
       cout<<"*";
    }
    cout<<endl;

}
for(int i=m-1;i>=1;i--)
{
    for(int j=m-i;j>=1;j--)
    {
      cout<<" ";
    }
    for(int j=2*i-1;j>=1;j--)
    {
        cout<<"*";
    }
    cout<<endl;
}
}
