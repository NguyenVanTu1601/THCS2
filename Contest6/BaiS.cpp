#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define I 1
#define V 5
#define X 10
#define L 50
#define C 100
#define D 500
#define M 1000
main(){
	ios_base::sync_with_stdio(false);
	int t;
	cin >> t;
	string s;
	while(t--){
		cin >> s;
		long long Sum  = 0;
		/*if(s[0] == 'I') Sum += I;
		if(s[0] == 'V') Sum += V;
		if(s[0] == 'X') Sum += X;
		if(s[0] == 'L') Sum += L;
		if(s[0] == 'C') Sum += C;
		if(s[0] == 'D') Sum += D;
		if(s[0] == 'M') Sum += M;*/
		for(int i = 0; i < s.length() - 1; i++){
			if(s[i] == 'I'){
				if(s[i+1] == 'V'){
					i++;
					Sum += 4;
				}
				else if(s[i+1] == 'X'){
					Sum += 9;
					i++;
				}
				else Sum += 1;
			}
			else if(s[i] == 'X'){
				if(s[i+1] == 'L'){
					Sum += 40;
					i++;
				} 
				else if(s[i+1] == 'C'){
					Sum += 90;
					i++;
				}
				else Sum += 10;
			}
			
			else if(s[i] == 'C'){
				if(s[i+1] == 'D'){
					Sum += 400;
					i++;
				}
				else if(s[i+1] == 'M'){
					Sum += 900;
					i++;
				}
				else Sum += 100;
			}
			else if(s[i] == 'V') Sum += 5;
			else if(s[i] == 'L') Sum += 50;
			else if(s[i] == 'D') Sum += 500;
			else Sum += 1000;
		}
		if(s[s.length() - 1] == 'X'){
			if(s[s.length()-2] != 'I') Sum += X;
		}
		if(s[s.length() - 1] == 'V'){
			if(s[s.length()-2] != 'I') Sum += V;
		}
		if(s[s.length() - 1] == 'L'){
			if(s[s.length()-2] != 'X') Sum += L;
		}
		if(s[s.length() - 1] == 'C'){
			if(s[s.length()-2] != 'X') Sum += C;
		}
		if(s[s.length() - 1] == 'D'){
			if(s[s.length()-2] != 'C') Sum += D;
		}
		if(s[s.length() - 1] == 'M'){
			if(s[s.length()-2] != 'C') Sum += M;
		}
		if(s[s.length()-1] == 'I') Sum += I;
		cout << Sum << endl;
	}
    return 0;
    
    
}

