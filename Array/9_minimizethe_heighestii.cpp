#include<bits\stdc++.h>
using namespace std ;

int main(){

    vector<int>arr = {1, 5, 8, 10} ;
    int k=2 ;

    int n = arr.size() ;
        sort(arr.begin(),arr.end()) ;
        int mini = 0 ;
        int maxi = 0 ;
        int ans = arr[n-1]-arr[0] ;
        
        for(int i=1 ; i<n ; i++){
            mini = min(arr[0]+k,arr[i]-k) ;
            maxi = max(arr[i-1]+k,arr[n-1]-k) ;
            if(mini<0) {
                continue ;
            }
            ans = min(ans,maxi-mini) ;
        }
        cout<<ans ;


    return 0 ;

}