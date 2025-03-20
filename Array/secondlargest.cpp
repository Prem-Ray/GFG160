#include<bits/stdc++.h>
using namespace std ;

int main(){

    vector<int>arr = {10, 5, 10} ;
    int n = arr.size() ;


    // Brute Force Approach O(nlogn+n)
        // sort(arr.begin(),arr.end()) ;  
        // int max = arr[n-1] ;
        // int secondmax = -1 ;
        // for(int i=n-1 ; i>=0 ; i--){
        //     if(arr[i]<max){
        //         secondmax = arr[i] ;
        //         break ;
        //     }
        // }
        // cout << secondmax << endl ;

    // Optimized Approach O(2n)
        // int max = -1 ;
        // for(int i=0 ; i<n ; i++){
        //     if(arr[i]>max){
        //         max = arr[i] ;
        //     }
        // }
        // int secondmax = -1 ;
        // for(int i=0 ; i<n ; i++){
        //     if(arr[i]!=max && arr[i]>secondmax){
        //         secondmax = arr[i] ;
        //     }
        // }

        // cout<<secondmax<<endl ;

    // Optimized Approach O(n)
    int max = -1 ;
    int secondmax = -1 ;

    for(int i=0 ; i<n ; i++){
        if(arr[i]>max){
            secondmax = max ; 
            max = arr[i] ;
        }
        else if(arr[i]>secondmax && arr[i]!=max){
            secondmax = arr[i] ;
        }
    }

    cout<<secondmax<<endl ;

    return 0 ;

}