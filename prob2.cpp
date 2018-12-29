//
//  prob2.cpp
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
    lli currFib=0,sum=2,i=1,fib1=1,fib2=2;
    while(true){
        currFib=fib1+fib2;
        fib1=fib2;
        fib2=currFib;
        if(currFib < 4000000){
            if(currFib%2==0)
                sum+=currFib;
            i++;
        }else{
            break;
        }
    }
    cout<<sum;br;
    return 0;
}
