#include<iostream>
#include<bits/stdc++.h>
using namespace std;

main(){
	vector < string > str;
	int t;
	cin >> t;
	cin.ignore();
	string s;
	while(t--){
		string a = "";
		getline(cin,s);
		for(int i = 0; i < s.length(); i++){
			if(s[i] != ' ') {
				while(s[i] != ' ') {
					if(s[i] >= 'A' && s[i] <= 'Z'){
						a += (s[i] + 32);
					}
					else a += s[i];
					i++;
					if(i >= s.length()){
						break;
					}
			    }
			    a += " ";
			    i--;
			    
			}
		}
		string x = "";
		int vitri = 0;
		for(int i = a.length() - 2; i >= 0; i--){
			if(a[i] == ' ') {
				vitri = i;
				break;
			}
		}
		for(int i = vitri + 1; i < a.length() - 1; i++){
			x += a[i];
		}
		x+=a[0];
		for(int i = 1; i < vitri; i++){
			if(a[i] == ' ') x += a[i+1];
		}
		
		str.push_back(x);
	}
	
	for(int i = 0; i < str.size(); i++){
		cout << str[i];
		int dem = 1;
		for(int j = 0; j < i; j++){
			if(str[i] == str[j]) dem++;
		}
		if(dem > 1) cout << dem << "@ptit.edu.vn" << endl;
		else cout <<"@ptit.edu.vn" << endl;
	}
    return 0;
}

