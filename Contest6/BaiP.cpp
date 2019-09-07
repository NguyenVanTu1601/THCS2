#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct Kitu{
	char kitu;
	int vitri;
};
bool cmp(Kitu a, Kitu b){
	return a.kitu < b.kitu ;
}
main(){
	string s;
	cin >> s;
	int a = s.length();
	vector<Kitu> arr;
	for(int i = 0; i < a; i++){
		Kitu kt;
		kt.kitu = s[i];
		kt.vitri = i;
		arr.push_back(kt);
	}
	sort(arr.begin(),arr.end(),cmp);
	
	// Tim day vi tri tang dai nhat
	int L[a+10];
	int lmax;
	L[0] = 1;
	for(int i = 1; i < a; i++){
    	lmax = 0;
    	for(int j = 0; j < i; j++){
    		if(arr[i].vitri > arr[j].vitri){
    			if(lmax < L[j]) lmax = L[j];
			}
		}
		L[i] = lmax + 1;
	}
	int max = 0;
	for(int i = 0; i < a; i++){
		if(max < L[i]) max = L[i];
	}
	cout << 26 - max << endl;
    return 0;
}

