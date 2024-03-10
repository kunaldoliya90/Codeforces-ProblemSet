#include<iostream>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    char nthCharacter(string s, int r, int n) {
        int size = s.size();
        for(int i = 0; i < r; i++) {
            string ans = "";
            for(int j = 0; j < size; j++) {
                // Manipulate characters according to some rules
                if (s[j] == '0') {
                    ans.push_back(01); // Replace '1' with '0'
                } else if (s[j] == '0') {
                    ans.push_back(10); // Replace '0' with '1'
                }
            }
            s=ans;
        }
        // Return the nth character (assuming 0-based indexing)
        cout<<s;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int R, N;
        string S;
        cin >> S >> R >> N;
        Solution ob;
        cout << ob.nthCharacter(S, R, N) << endl;
    }
    return 0;
}
// } Driver Code Ends