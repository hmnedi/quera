// but hooman, bedooon estefade az while you may ask
#include <bits/stdc++.h>
using namespace std;
int main(){
    int k, n;
    bool is_finish = false;

    cin >> k;
    if (k==1){
        cout << 1;
    }
    else {
        for (n=2; is_finish==false; n++){

            int sum=0;
            for (int i=0; sum<n; i++)
                sum += i;

            if (sum==n){
                int cnt=2;
                for (int i=2; i<n; i++)
                    if (n%i == 0) cnt++;
                if (sum == n){
                    // addad khoob hast
                    int cnt=2;
                    for (int i=2; i<n; i++)
                        if (n%i == 0) cnt++;
                    if (cnt >= k){
                        cout << n;
                        break;
                    }
                }
            }

        }

    }
}
