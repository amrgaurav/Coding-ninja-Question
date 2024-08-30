#include <bits/stdc++.h>
using namespace std;

void intersection(int *input1, int *input2, int size1, int size2)
{
    // Write your code here
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (input1[i] == input2[j])
            {
                cout << input1[i] << " ";
                input2[j] = -1;
                break;
            }
        }
    }
}

int a=3;
void n(int &x){
    x=x*a;
    cout<<x;
}
void m(int y){
    a=1;
    a=y-1;
    n(a);
    cout<<a;
}
int main()
{
    m(a);
    return 0;
}