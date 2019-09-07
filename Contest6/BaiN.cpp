#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct Tu{
	string a;
	int dodai;
	int vitri;
	int solan;
};
bool cm(Tu a, Tu b){
	if(a.dodai == b.dodai) {
	   if(a.a == b.a) return a.vitri < b.vitri;
	   return a.a < b.a;
    }
	return a.dodai > b.dodai;
}
bool cmp(Tu a, Tu b){
	if(a.dodai == b.dodai) {
		if(a.solan == b.solan) return a.vitri < b.vitri;
		return a.solan > b.solan;
	}
	return a.dodai > b.dodai;
}
vector< Tu >xau;

int len(char s[1000]){
	int i = 0;
	while(s[i] != '\0') i++;
	return i;
}
main(){
	char s[1000];
	int vitri = 1;
	string h;
	Tu aa[1001];
	while(scanf("%s", &s) != -1){
		Tu tt;
		tt.a = s;
		tt.dodai = len(s);
		tt.vitri = vitri;
		tt.solan = 1;
		aa[vitri] = tt;
		vitri++;
		xau.push_back(tt);
	}
	Tu k;
	k.a = "..";
	k.dodai = 0;
	k.solan = 0;
	k.vitri = 1002;
	vitri++;
	xau.push_back(k);
	sort(xau.begin(), xau.end(), cm);
	
	for(int i = 0; i < xau.size() - 1; i++){
		if(xau[i].dodai == xau[i+1].dodai){
			if((xau[i].a== xau[i+1].a)){
				xau[i].solan++;
				xau.erase(xau.begin()+ i + 1);
				i--;
			}
		}
		else break;
	}

	sort(xau.begin(), xau.end(), cmp);
	
	for(int i = 0; i < xau.size() - 1; i++){
		if(xau[i].dodai > xau[i+1].dodai){
			cout << xau[i].a << " " << xau[i].dodai << " " << xau[i].solan << endl;
			break;
		}
		else{
			cout << xau[i].a << " " << xau[i].dodai << " " << xau[i].solan << endl;
		}
	}
    return 0;
}

