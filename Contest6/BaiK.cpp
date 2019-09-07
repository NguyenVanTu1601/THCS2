#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int sosanh(string s1, string s2){
	if(s1.length() != s2.length()) return 0;
	for(int i = 0; i < s2.length(); i++){
		if(s1[i] != s2[i]) return 0;
	}
	return 1;
}
main(){
	int t;
	cin >> t;
	cin.ignore();
	string s1;
	string s2;
	
	while(t--){
		getline(cin,s1);
		vector<string> str1;
	    vector<string> str2;
		for(int i = 0; i < s1.length(); i++){
			if(s1[i] != ' ') {
				string a = "";
				while(s1[i] != ' ') {
					a += s1[i];
					i++;
					if(i >= s1.length()){
						break;
					}
			    }
			    str1.push_back(a);
			    i--;
			}
		}
		getline(cin,s2);
		for(int i = 0; i < s2.length(); i++){
			if(s2[i] != ' ') {
				string a = "";
				while(s2[i] != ' ') {
					a += s2[i];
					i++;
					if(i >= s2.length()){
						break;
					}
			    }
			    str2.push_back(a);
			    i--;
			}
		}
		
		for(int i = 0; i < str1.size(); i++){
			for(int j = 0; j < str2.size(); j++){
				if(sosanh(str1[i], str2[j]) == 1){
					str1.erase(str1.begin()+i);
					i--;
					break;
				}
			}
		}
		sort(str1.begin(),str1.end());
		str1.push_back("0");
		for(int i = 0; i < str1.size() - 1; i++){
			if(sosanh(str1[i], str1[i+1]) == 0) cout << str1[i] << " ";
		}
		cout << endl;
		
	}
    return 0;
}

