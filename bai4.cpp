#include<iostream>
using namespace std;
int Tim_kiem(int a[], int n, int x)
{
    int left = 0;
    int right = n - 1;
    int mid ;
    while (left <= right)
    {
        mid = (left + right) / 2;
        if (a[mid] == x)
            return mid; 
        if (a[mid] < x)
            left = mid + 1;
        else if (a[mid] > x)
            right = mid - 1; 
    }
    return -1; 
}
int main(){
   int n , x ;
   cin >> n >> x ;
   int a[n+1];
   for(int i = 0 ; i < n ; i++){
       cin >> a[i] ;
   }
   if(Tim_kiem(a,n,x) != -1){
       cout <<"YES";
   }
   else{
       cout << "NO";
   }
   return 0 ;
}
