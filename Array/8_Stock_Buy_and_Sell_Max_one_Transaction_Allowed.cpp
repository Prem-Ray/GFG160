#include<bits\stdc++.h>
using namespace std ;

int main(){

    vector<int>prices = {7, 10, 1, 3, 6, 9, 2} ;
    int maxProfit = 0 ;
    int minPrice = prices[0] ;
        
    for(int i=1 ; i<prices.size() ; i++){
        int profit = prices[i]-minPrice ;
        maxProfit = max(maxProfit,profit) ;
        minPrice = min(minPrice,prices[i]) ;
    }
        
    cout<<maxProfit ;
        


    return 0 ;

}