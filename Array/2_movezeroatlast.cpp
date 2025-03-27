#include<bits/stdc++.h>
using namespace std ;

int main(){
    
    vector<int>arr = {1,2,3,0,4,5,0} ;

    int n = arr.size() ;


    // Brute Force Approach TC:O(2n-m) SC:O(n) ;
    // vector<int>ans ;
    // for(int i=0 ; i<n ; i++){
    //     if(arr[i] != 0){
    //         ans.push_back(arr[i]) ;
    //     }
    // }
    // int m = ans.size() ;
    // for(int i=0 ; i<=n-m-1 ; i++){
    //     ans.push_back(0) ;
    // }

    // for(int i=0 ; i<ans.size() ; i++){
    //     cout<<ans[i]<<" " ;
    // }



    // Better Approach TC:O(2n) SC:O(1) 
    // int j=-1 ;
    // // first find your first index of 0 
    // for(int i=0 ; i<n ; i++){
    //     if(arr[i] == 0){
    //         j = i ;
    //         break ;
    //     }
    // }
    // // if j== -1 , so your array have no zeros 
    // if(j != -1){
    //     for(int i=j+1 ; i<n ; i++){
    //         if(arr[i] != 0){
    //             swap(arr[i],arr[j]) ;
    //             j++ ;
    //         }
    //     }
    // }


    // Optimal Approach TC:O(n) SC:O(1) 
    // j index for 0 pointing 
    int j=0 ;
    for(int i=0 ; i<n ; i++){
        if(arr[i] != 0){
            swap(arr[i],arr[j]) ;
            j++ ;
        }
    }


    return 0 ;

}
