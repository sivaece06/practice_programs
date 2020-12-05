#include <iostream>
#include <vector>
#include<bits/stdc++.h> 
using namespace std;

void fib(int n) {
    if (n <=2) {
        cout<<"Fibonacci: "<<1;
        return;
    }
    
    vector<unsigned long> memo(n+1,0);
   
    memo[0] = 0;
    memo[1] = 1;

    for (int i=2; i<=n;i++) {
        cout<<"n: "<<n<<" "<<memo[i-2]<<" " <<memo[i-1]<<" "<<endl;
        memo[i] = memo[i-2] + memo[i-1];
    }
    
    cout<<"Fibonacci: "<<memo[n]<<endl;
}

int main() {
    std::cout << "Hello, world!\n";
    
    fib(6);
    fib(7);
    fib(8);
    fib(50);
    return 0;
}
