#include <bits/stdc++.h>
using namespace std;
int main() {
    string t,p;
    cin >> t >> p;
    int tl = t.size();
    int pl = p.size();
    int lps[pl];
    int idx = 0;
    int sz = 0;
    lps[idx++] = sz;
    while(idx < pl){
    	if(p[idx] == p[sz]){
    		sz++;
    		lps[idx++] = sz;
    	} 
    	else if(sz == 0){
    		lps[idx++] = 0;
    	}
    	else sz = lps[sz - 1]; // quick back
    }
    idx = 0;
    for(int i = 0; i < tl;){
    	if(t[i] == p[idx]){
    		i++;
    		idx++;
    		if(idx == pl){
    			cout << "YAY" << i - pl;
    			idx = lps[idx - 1];
    		}
    	}
    	else if(idx == 0){
    		i++;
    	}
    	else {
    		idx = lps[idx - 1];
    	}
    	
    }
}
