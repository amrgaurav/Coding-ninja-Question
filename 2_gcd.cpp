#include<bits/stdc++.h>
using namespace std;
// int GCD(int a,int b)
// {
//     if(a==0) return b;
//     if(b==0)return a;
//     if(a==b) return a;
//     if(a>b)
//        return GCD(a-b,b);
//     return GCD(a,b-a);
// }


// int GCD(int a,int b)
// {
//     if(b==0)
//       return a;
//     return GCD(b,a%b);

// }
int GCD(int a,int b)
{
    if(a==0) return b;
    if(b==0) return a;
    if(a==b)
      return a;
    if(a>b)
      return GCD(a-b,b);
    return GCD(a,b-a);

}
long long int LCM(int a,int b)
{
    return (a*b/GCD(a,b)) ;
}
int main()
{
    int a=420,b=600;
    cout<<GCD(a,b);
    cout<<endl<<LCM(a,b)<<endl;
    // cout<<char('A'+1);
    // int a = 10;
    // char ch = 'a';
    // cout<<a<<endl;
    // ch = ch + a;
    // printf("%c\n", ch);
}