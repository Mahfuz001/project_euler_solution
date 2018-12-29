//
//  prob1.cpp
//  
//
//  Created by Mahfuz Ahmed on 12/29/18.
//

#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define br std::cout << "\n";

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    #if 0
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout)
    #endif
    lli sum=0;
    for(int i=0;i<1000;i++){
        if(i%5==0 || i%3==0){
            sum+=i;
        }
    }
    cout<<sum;br;

    return 0;
}
