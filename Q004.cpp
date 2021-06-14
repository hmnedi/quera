// 2020-07-03

#include <bits/stdc++.h>
using namespace std;
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
	long long  n;
	cin >> n;
	string s = to_string(n);
	if (s.size() == 1) cout << n;
	else {
		while(s.size() >1){
			n = 0;
			for(long long i=0;i<s.size();i++){
				n += s[i] - '0';
			}
			s = to_string(n);
		}
		cout << s;
	}	

}
