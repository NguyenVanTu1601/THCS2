#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int sosanh(string s1, string s2){
	if(s1.length() != s2.length()) return 0;
	for(int i = 0; i < s2.length(); i++){
		if(s2[i] >= 'A' && s2[i] <= 'Z'){
			s2[i] = s2[i] + 32;
		}
		if(s1[i] >= 'A' && s1[i] <= 'Z'){
			s1[i] = s1[i] + 32;
		}
	}
	for(int i = 0; i < s2.length(); i++){
		if(s1[i] != s2[i]) return 0;
	}
	return 1;
}

main(){
	int t;
	cin >> t;
	string s1;
	string s2;
	cin.ignore();
	int z = 1;
	while(t--){
		getline(cin,s1);
		vector<string> str1;
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
		for(int i = 0; i < str1.size(); i++){
			if(sosanh(str1[i], s2) == 1){
				str1.erase(str1.begin()+i);
				i--;
				
			}
		}
		cout << "Test " << z << ": ";
		z++;
		for(int i = 0; i < str1.size(); i++){
			cout << str1[i] << " ";
		}
		cout << endl;
	}
    return 0;
}

