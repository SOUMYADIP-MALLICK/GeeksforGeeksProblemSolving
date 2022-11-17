//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:
    int beautySum(string s) {
        int answer = 0;
        
        for (int i = 0; i < s.length(); i++) {
            int array[26] = {0};
            
            for (int j = i; j < s.length(); j++) {
                char ch = s[j];
                array[ch-'a']++;
                
                int maximum = INT_MIN;
                int minimum = INT_MAX;
                int diff_chars = 0;
                for (int k = 0; k < 26; k++) {
                    maximum = max(maximum, array[k]);
                    if (array[k] > 0) {
                        minimum = min(minimum, array[k]);
                        diff_chars++;
                    }
                }
                
                if (diff_chars >= 2) {
                    answer += (maximum - minimum);
                }
            }
        }
        
        return answer;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;
        cout << obj.beautySum(s) << endl;
    }
    return 0;
}
// } Driver Code Ends
