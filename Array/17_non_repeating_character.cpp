#include<bits/stdc++.h>
using namespace std ;

class Solution {
    public:
      char nonRepeatingChar(string &s) {
          // Your code here
          unordered_map<char,int>freq ;
          for(char c:s){
              freq[c]++ ;
          }
          for(char c:s){
              if(freq[c]==1) return c ;
          }
          return '$' ;
      }
  };

  int main() {

    int T;
    cin >> T;

    while (T--) {

        string S;
        cin >> S;
        Solution obj;
        char ans = obj.nonRepeatingChar(S);

        if (ans != '$')
            cout << ans;
        else
            cout << "-1";

        cout << endl;

        cout << "~"
             << "\n";
    }

    return 0;
}