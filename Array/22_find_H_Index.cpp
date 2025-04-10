#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
      // Function to find hIndex
      int hIndex(vector<int>& citations) {
          // code here
          int n = citations.size() ;
          vector<int>b(n+1,0) ;
          for(auto i:citations){
              if(i>=n) b[n]++ ;
              else b[i]++ ;
          }
          int c=0 ;
          for(int i=n ; i>=0 ; i--){
              c+=b[i] ;
              if(c>=i) return i ;
          }
          return 0 ;
      }
  };
  


int main() {

    int test_cases;
    cin >> test_cases;
    cin.ignore();
    while (test_cases--) {
        string input;
        vector<int> arr;

        // Read the array from input line
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        // Solution instance to invoke the function
        Solution ob;
        int result = ob.hIndex(arr);

        cout << result << endl;

        cout << "~" << endl;
    }
    return 0;
}