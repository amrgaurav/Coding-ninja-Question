//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool canSplit(vector<int>& arr) {
        // code here
        int n=arr.size();
        int i=0,j=n-1;
        int LeftSum=arr[0],RightSum=arr[n-1];
        while(i<j)
        {
            if(LeftSum==RightSum && i+1==j)
            {
                return true;
            }
            else if(LeftSum>RightSum)
            {
                j--;
                RightSum+=arr[j];
            }
            else{
                i++;
                LeftSum+=arr[i];
            }
        }
        return false;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t-- > 0) {
        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<int> arr;
        string temp;
        while (ss >> temp) {
            arr.push_back(stoi(temp));
        }

        Solution obj;
        bool res = obj.canSplit(arr);
        cout << (res ? "true" : "false") << endl;
    }
    return 0;
}
// } Driver Code Ends