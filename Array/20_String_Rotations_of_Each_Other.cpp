#include<bits/stdc++.h>
using namespace std ;

class Solution {
    public:
      // Function to check if two strings are rotations of each other or not.
      bool areRotations(string &s1, string &s2) {
          // Your code here
          string temp = s1+s1 ;
          if(temp.find(s2) !=string::npos){
              return true ;
          }
          return false ;
      }
  };

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s1;
        string s2;
        cin >> s1 >> s2;
        Solution sol;
        int result = sol.areRotations(s1, s2);
        if (result) {
            cout << "true" << endl;

        } else {
            cout << "false" << endl;
        }
        cout << "~"
             << "\n";
    }
    return 0;
}