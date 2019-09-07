#include<iostream>
#include<bits/stdc++.h>
using namespace std;

main(){
	int t;
	cin >> t;
    string s1;
    string s2;
    cin.ignore();
    while(t--){
	    getline(cin,s1);
	    getline(cin,s2);
	 
	    // Tao cho 2 chuoi cung do dai
	    while(s1.length() != s2.length())
	    {
	    	if(s1.length() > s2.length()) s2 = '0' + s2; 
	    	else s1 = '0' + s1;	
		}
		
		
		// Tinh hieu :
		int tmp = 0;
		int j = s1.length() - 1;
		string hieu = "";
		if(s1 == s2) cout << "0" << endl;
		if(s1 > s2)
		{
			while(j >= 0)
			{
				int s = (s1[j] - '0') - (s2[j] - '0') - tmp;
				if(s < 0)
				{
					int x = s + 10;
					char a = x + '0';
					hieu = hieu + a;
					tmp = 1;
					j--;
				}
				if(s >= 0)
				{
					char a = s + '0';
					hieu = hieu + a;
					tmp = 0;
					j--;
				}
				
			}
			string d = "";
			int vt;
			for(int j = hieu.length() - 1; j >= 0; j--)
			{
				if(hieu[j] != '0')
				{
				    vt = j;
					break;	
				}
			}
		
			for(int j = vt; j >= 0; j--)
			{
				d = d + hieu[j];
			}
			cout << d << endl;
		}
		if(s1 < s2)
		{
			while(j >= 0)
			{
				int s = (s2[j] - '0') - (s1[j] - '0') - tmp;
				if(s < 0)
				{
					int x = s + 10;
					char a = x + '0';
					hieu = hieu + a;
					tmp = 1;
					j--;
				}
				if(s >= 0)
				{
					char a = s + '0';
					hieu = hieu + a;
					tmp = 0;
					j--;
				}
				
			}
			//cout <<"-";
			for(int j = hieu.length() - 1; j >= 0; j--)
			{
				cout << hieu[j];
			}
			cout << endl;
		}
}
	
	
    return 0;
    
}

