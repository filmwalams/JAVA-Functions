#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s;
	s = s + s;
	int idx = 0;
	int offset = 0;
	for(int i = 1; i < s.size() ; i++){
		if(s[i] > s[idx]){
			ans = i;
			offset = 0;
		}
		else if(s[i] > s[idx + offset]){
			ans = i - offset;
			i = ans;
			offset = 0;
		}
		else if(s[i] == s[ans + offset]){
			offset++;
		}
		else{
			offset = 0;
		}
	}
	cout << ans;
}
