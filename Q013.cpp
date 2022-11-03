#include <bits/stdc++.h>
#define pb push_back
#define all(x) x.begin(), x.end()
#define F_OR(i, a, b) for (int i=(a); i<(b); i++) //F_OR(i, 1, 10)
/*
int->str {string s = to_string(n)}
char->int {int n = chr - '0'}
str->int {int n = stoi(str)}
*/
using namespace std;

bool isPrime(int number) {
    if(number < 2) return false;
    if(number == 2) return true;
    if(number % 2 == 0) return false;
    for(int i=3; (i*i)<=number; i+=2){
        if(number % i == 0 ) return false;
    }
    return true;
}

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
    int n, b=0;
    cin >> n;
    string s = to_string(n);
    F_OR (i, 0, s.size()){
        b += s[i] - '0';
    }
    int i=1, res, cnt = 0;
    while (cnt!=b){
        if(isPrime(n+i)){
            cnt++;
            res = n+i;
        }
        i++;
    }
    cout << res;

}
