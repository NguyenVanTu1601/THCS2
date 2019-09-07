#include<iostream>
#include<bits/stdc++.h>
using namespace std;

main(){
	int t;
	cin >> t;
	string s;
	cin.ignore();
	while(t--){
		getline(cin,s);
		int dem = 0;
		string a = "";
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
				dem++;
			    i--;
			    
			}
		}
		for(int j = 0; j < s.length(); j++){
			if(a[j] == ' ') a[j+1] = a[j+1] - 32;
		}
		int vitri = 0;
		for(int i = 0; i < a.length(); i++){
			if(a[i] == ' '){
				vitri = i;
				break;
			}
		}
		for(int i = vitri + 1; i < a.length() - 1; i++){
			cout << a[i];
		}
		cout << ", ";
		for(int i = 0; i < vitri; i++){
			a[i] = a[i] - 32;
			cout << a[i];
		}
		cout << endl;
	}
    return 0;
}

