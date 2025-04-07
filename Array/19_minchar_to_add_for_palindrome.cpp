#include<bits/stdc++.h>
using namespace std ;

class Solution {
    public:
    
      int computelps(string c){
          int n=c.size() ;
          int l=0,i=1 ;
          vector<int>lps(n,0) ;
          while(i<n){
              if(c[i]==c[l]){
                  l++ ;
                  lps[i]=l ;
                  i++ ;
              }
              else{
                  if(l!=0) l=lps[l-1] ;
                  else i++ ;
              }
          }
          return lps[n-1] ;
      }
      int minChar(string& s) {
          // Write your code here
          string t=s ;
          reverse(t.begin(),t.end()) ;
          return s.size()-computelps(s+"#"+t) ;
      }
  };

  int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        int ans = ob.minChar(str);
        cout << ans << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}