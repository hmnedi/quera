#include <bits/stdc++.h>
#define pb push_back
#define all(x) x.begin(), x.end()
#define F_OR(i, a, b) for (int i=(a); i<(b); i++)
using namespace std;

int sum_digits (int n){
    int sum = 0;
    while (n) {
        sum += (n%10);
        n /= 10;
    }
    return sum;
}

bool is_prime(int n){
    if (n <= 1) return false;
    for(int i=2; i<=n/2; i++){
        if (n%i==0) return false;
    }
    return true;
}

int sum_prime_counters (int n){
    int sum =0;
    if (n==2) return 2;
    for(int i=2; i<=n; i++){
        if (n%i==0 && is_prime(i)) {
            sum += i;
        }
        //cout << i << " " << sum << endl;
    }
    return sum;
}

bool pedare_pesare_shoja (int n){
        //int a = sum_prime_counters(12);
        bool parcham = false;
        for (int i=2; i<=n; i++){
            if (i+sum_digits(i)+sum_prime_counters(i) == n) {
                parcham = true;
                //cout << i << endl;
                break;
            }
        //cout << i << " " << sum_digits(i) << " " << sum_prime_counters(i) << endl;
        }
        if (parcham) return true;
        else return false;
}

int main(){
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        if (pedare_pesare_shoja(n) == true) cout << "Yes";
        else cout << "No";
        cout << endl;
    }
}
