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
		int i = 0;
		int dem = 0;
		
		for(int i = 0; i < s.length(); i++){
			if(s[i] != ' ') {
				while(s[i] != ' ') {
					i++;
					if(i >= s.length()){
						break;
					}
					
			    }
				dem++;
			    i--;
			}
			
		}
		cout << dem << endl;
	}
    return 0;
}

