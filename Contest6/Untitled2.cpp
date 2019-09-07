#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct Tu{
	string s;
	int dodai;
	int soluong;
	int vitri;
};

main(){
	char x;
	vector<string> str;
	string a = "";
	string s;
	getline(cin,s);
	for(int i = 0; i < s.length(); i++){
		if(s[i] != ' '){
			a += s[i];
		}
		else {
			str.push_back(a);
			a = "";
		}
	}
	for(int i = 0; i < str.size(); i++){
		cout << str[i] << endl;
	}
    return 0;
}
//Tiet hoc cuoi cung da ket thuc. Mon hoc Tin hoc co so 2 da ket thuc. Cac ban co gang on tap tot de thi dat ket qua cao. Chuc cac ban ngay cang gat hai duoc nhieu thanh cong tren con duong da chon

