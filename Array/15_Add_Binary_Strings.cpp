#include<bits\stdc++.h>
using namespace std ;

class Solution {
    public:
      string addBinary(string& s1, string& s2) {
          // your code here
          reverse(s1.begin(),s1.end()) ;
          reverse(s2.begin(),s2.end()) ;
          
          string ans = "" ;
          int carry=0 ;
          int i=0 ;
          
          while(i<s1.length() || i<s2.length() || carry){
              int bit1 = (i<s1.length()) ? s1[i]-'0':0 ;
              int bit2 = (i<s2.length()) ? s2[i]-'0':0 ;
              int sum = bit1+bit2+carry ;
              ans += (sum%2) + '0' ;
              carry = sum / 2 ;
              i++ ;
          }
          reverse(ans.begin(),ans.end()) ; 
          size_t pos = ans.find_first_not_of('0') ;
          
          return (pos == string::npos)?"0":ans.substr(pos) ;
      }
  };

int main() {
    int t;
    cin >> t;
    while (t--) {
        string A, B;
        cin >> A >> B;
        Solution ob;
        cout << ob.addBinary(A, B);
        cout << "\n";

        cout << "~"
             << "\n";
    }
}
