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
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
    int n, maghlob_n=0, n_holder;
    cin >> n;
    n_holder = n;
    //cout << "addad bedoon yekan: " << n/10 << "\t faghat yekan: " << n%10;
    for (int i=0; n>0;n/=10){
        int yekan = n%10;
        //cout << maghlob_n*10 << "\t" << (maghlob_n*10) + yekan << endl; // shifting
        maghlob_n = (maghlob_n*10) + yekan;
    }
    if (n_holder == maghlob_n) cout << "YES";
    else cout << "NO";


}
