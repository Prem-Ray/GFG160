#include<bits/stdc++.h>
using namespace std ;

int main(){

    vector<int>arr = {1,4,3,2,6,5} ;

    // Brute Force Approach TC:O(n) SC:O(n)
    // vector<int>reversearray ;
    // for(int i=arr.size()-1 ; i>=0 ; i--){
    //     reversearray.push_back(arr[i]) ;
    // }
    // for(auto i:reversearray){
    //     cout<<i<<" " ;
    // }

    // Optimal Approach TC:O(n/2) SC:O(1) ;
    int start = 0 ;
    int end = arr.size()-1 ;

    while(start<end){
        swap(arr[start],arr[end]) ;
        start++ ;
        end-- ;
    }

    


    return 0 ;
}