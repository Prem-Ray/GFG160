#include<bits\stdc++.h>
using namespace std ;

int main(){

    vector<int>arr = {2, 3, -8, 7, -1, 2, 3} ;
    int maxi = INT_MIN ;
        int sum = 0 ;
        
        for(int i=0 ; i<arr.size() ; i++){
            sum+=arr[i] ;
            
            if(sum>maxi){
                maxi=sum ;
            }
            
            if(sum<0){
                sum=0 ;
            }
        }
        
        cout<< maxi ;



    return 0 ;

}