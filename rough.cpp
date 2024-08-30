#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> array{678, 2, 5, 1, 6, 8, 34, 54, 678, 1, 23, 45, 67, 89, 90, 76};
  int first = INT_MIN, second = INT_MIN;
  int n = array.size();
  // Traverse the array
  for (int i = 0; i < n; i++)
  {
    // If current element is greater than first
    if (array[i] > first)
    {
      second = first;
      first = array[i];
    }
    // If current element is in between first and second
    else if (array[i] > second && array[i] < first)
    {
      second = array[i];
    }
  }
  cout << second;
  //  sort(arr.begin(),arr.end());
  //  for(auto x:arr)
  //  {
  //   cout<<x<<"->";
  //  }
}
// int main ()
// {
//   int n;
//   cin >> n;
//   int k = (1 << (int) floor (log2 (n)) + 1) - 1;

//   cout << (n ^ k);
// }
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a[]={2,5,1,6,8};
//     int d=3,v=300,c=0;
//     if(d%2==0)
//     {
//         // even allow then count odd
//         for(auto x:a)
//         {
//             if(x&1){c++;}
//         }
//     }
//     else{
//          for(auto x:a)
//         {
//             // cout<<x;
//             // cout<<"--"<<(x&1)<<endl;
//             if(!(x&1)){c++; }
//         }
//     }
//     cout<<c*v;

// }
// int main() {
//     /*  Read input as specified in the question.
//      * Print output as specified in the question.
//      */
//      int n;
//      cin>>n;
//      for(int i=0;i<n;i++)
//      {
//          int count=1;
//          int j;
//          for(j=0;j<n-1-i;j++)
//          {
//              cout<<" ";
//          }
//          for(int k=j;k<n;k++)
//          {
//              cout<<count+j;
//              count++;
//          }
//          cout<<endl;
//      }

// }