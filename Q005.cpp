// 2020-07-14
#include <bits/stdc++.h>
#define pb push_back
#define all(x) x.begin(), x.end()
using namespace std;
long long int fun(long long a[], long long n){
    long long int t = __gcd(a[1], a[0]);
    for(long long i=2;i<n;i++){
        t = __gcd(t, a[i]);
    }
    return t;
}
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
    long long n;
    cin >> n;
    long long a[n];
    for(long long i=0;i<n;i++) cin >> a[i];
    long long t = fun(a, n);
    if (t){
        long long sum=0;
        for(long long i=0;i<n;i++){
            sum += (a[i]/t);
        }
    cout << sum;
    }
}

