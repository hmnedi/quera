#include <bits/stdc++.h>
#define pb push_back
#define all(x) x.begin(), x.end()
#define F_OR(i, a, b) for (int i=(a); i<(b); i++)
using namespace std;

int sum_digit(int a[], int n){
    int sum = 0;
    F_OR(i, 0, n){
        sum += a[i];
    }
    return sum;
}

void print_ans(int a[], int b[], int n){
    F_OR(i, 0, n) cout << a[i];
    cout << " ";
    F_OR(i, 0, n) cout << b[i];
}

void solve(int num_min[], int num_max[], int m, int s){
    for(int i=m-1; i>=0; i--){
        for(int j=0; j<9; j++){
            if (sum_digit(num_min, m) < s){
                num_min[i]++;
            }
            else break;
        }
    }

    for(int i=m-1; i>=0; i--){
        for(int j=0; j<9; j++){
            if (sum_digit(num_max, m) > s){
                num_max[i]--;
            }
            else break;
        }
    }
}

int main(){
cin.tie(0);

    int m, s;
    cin >> m >> s;

    int num_min[m], num_max[m];
    F_OR(i, 0, m) num_max[i] = 9;
    F_OR(i, 1, m) num_min[i] = 0;
    num_min[0] = 1;

    bool flagAns = true;
    if (s==0 || s > 9*m){
        flagAns = false;
    }
    else {
        solve(num_min, num_max, m, s);
    }

    if (flagAns) {
        print_ans(num_min, num_max, m);
    }
    else {
        cout << -1 << " " << -1;
    }

}
