#include<bits\stdc++.h>
using namespace std ;

int main(){

    vector<int>prices = {100, 180, 260, 310, 40, 535, 695} ;

    int profit = 0 ;
    int n = prices.size() ;
        
    for(int i=1 ; i<n ; i++){
        if(prices[i] > prices[i-1]){
            int newProfit = prices[i]-prices[i-1] ;
            profit += newProfit ;
        }
    }

    cout<<profit<<endl ;



    return 0 ;

}
