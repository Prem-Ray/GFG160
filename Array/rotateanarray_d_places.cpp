#include<bits/stdc++.h>
using namespace std ;

void reverse(vector<int>&arr , int start , int end){
    while(start<end){
        swap(arr[start] , arr[end]) ;
        start++ ;
        end-- ;
    }
}

int main(){

    vector<int>arr ={1,2,3,4,5} ; 
    cout<<"Array before Rotated:\n" ;
    for(int i=0 ; i<arr.size() ; i++){
        cout<<arr[i]<<" " ;
    }

    cout<<endl ;

    int d ;
    cout<<"Enter your d places : " ;
    cin>>d ;

    int n = arr.size() ;

    //if d is greater than array size 
    d = d%n ;

    reverse(arr,0,d-1) ;
    reverse(arr,d,n-1) ;
    reverse(arr,0,n-1) ;

    cout<<"New Rotated Array:\n" ;
    for(int i=0 ; i<arr.size() ; i++){
        cout<<arr[i]<<" " ;
    }

    return 0 ;
}