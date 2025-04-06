#include<bits/stdc++.h>
using namespace std ;

class Solution {
    public:
      vector<int>computelps(string pat){
          int m = pat.size() ;
          vector<int>lps(m,0) ;
          int l=0 ;
          int i=1 ;
          while(i<m){
              if(pat[i] == pat[l]){
                  l++ ;
                  lps[i]=l ;
                  i++ ;
              }
              else{
                  if(l!=0) l=lps[l-1] ;
                  else{
                      lps[i]=0 ;
                      i++ ;
                  }
              }
          }
          return lps ;
      }
      
      vector<int> search(string& pat, string& txt) {
          // code here
          int m = pat.size() ;
          int n = txt.size() ;
          vector<int>lps = computelps(pat) ;
          vector<int>result ;
          // fot text
          int i=0 ;
          // for pat
          int j=0 ;
          while(i<n){
              if(txt[i] == pat[j]){
                  i++ ;
                  j++ ;
              }
              if(j==m){
                  result.push_back(i-j) ;
                  j=lps[j-1] ;
              }
              else if(i<n && txt[i]!=pat[j]){
                  if(j!=0) j=lps[j-1] ;
                  else i++ ;
              }
          }
          return result ;
      }
  };

  
  int main() {
    int t;
    cin >> t;
    while (t--) {
        string S, pat;
        cin >> S >> pat;
        Solution ob;
        vector<int> res = ob.search(pat, S);
        if (res.size() == 0)
            cout << "[]" << endl;
        else {
            for (int i : res)
                cout << i << " ";
            cout << endl;
        }
    }
    return 0;
}

