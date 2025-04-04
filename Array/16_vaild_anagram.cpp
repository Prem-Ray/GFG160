#include<bits/stdc++.h>
using namespace std ;

class Solution {
    public:
      // Function is to check whether two strings are anagram of each other or not.
      bool areAnagrams(string& s1, string& s2) {
          // Your code here
          if(s1.length() != s2.length()){
              return false ;
          }
          int arr[26] = {0} ;
          for(int i=0 ; i<s1.length() ; i++){
              arr[s1[i]-'a']++ ;
              arr[s2[i]-'a']-- ;
          }
          for(int i=0 ; i<26 ; i++){
              if(arr[i]){
                  return false ;
              }
          }
          return true ;
      }
  };




int main() {

    int t;

    cin >> t;

    while (t--) {
        string c, d;

        cin >> c >> d;
        Solution obj;
        if (obj.areAnagrams(c, d))
            cout << "true" << endl;
        else
            cout << "false" << endl;
        cout << "~" << endl;
    }
}