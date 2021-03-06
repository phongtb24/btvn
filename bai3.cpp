#include<iostream>
#include<cmath>
using namespace std;
int mod_pow(long long a, long long b, long  p)
{
    long long t = 1 ;
    for(int i = 1 ; i <= b; i++){
        t *= a ;
        t %= p ;
    }
    return t;
}

int main(){
    long  a , n , m ;
    cin >> a >> n >> m;
    cout << mod_pow(a,n,m) << endl ;
    return 0;
}
