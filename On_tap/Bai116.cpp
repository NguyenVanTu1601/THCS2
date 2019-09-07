#include<iostream>
#include<bits/stdc++.h>
using namespace std;

main(){
	string s;
	map<string,int> q;
	while(cin >> s){
		q[s]++;
	}
	map<string,int>::iterator it;
	cout << q.size() << endl;
	for(it = q.begin(); it != q.end(); it++){
		cout << it->first << " " << it->second << endl;
	}
    return 0;
}

