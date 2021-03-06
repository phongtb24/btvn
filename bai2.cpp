#include<iostream>
using namespace std ;
int main(){
    int n ;
    cin >> n ;
    bool isPrime[n+1];
    for(int i = 0; i <= n;++i) {
        isPrime[i] = true;
    }
    isPrime[0] = false;
    isPrime[1] = false;
    for(int i = 2; i * i <= n; i++) {
         if(isPrime[i] == true) {
             for(int j = i * i; j <= n; j += i)
                 isPrime[j] = false;
        }
    }
    for(int i = 0 ; i <= n ; i++){
        if(isPrime[i] == true){
            cout << i << " ";
        }
    }
    return 0 ;
}
