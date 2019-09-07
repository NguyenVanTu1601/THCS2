#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
main(){
	int n;
	cout <<"Nhap so n = ";
	cin >> n;
	while(n < 3 || n > 300){
		cout <<"Vui long nhap lai so t thoa man 3 <= n <= 300" << endl;
		cout << "Nhap so n = ";
		cin >> n;
	}
	int x;
	cout <<"Nhap so x = ";
	cin >> x;
	while(x == 0){
		cout <<"Vui long nhap lai so x thoa man x != 0" << endl;
		cout << "Nhap so x = ";
		cin >> x;
	}
	
	long long sum = 0;
	for(int i = 1; i <= n; i++){
		sum += i;
	}
	
	cout <<"Tong S = " << fixed << setprecision(2) << 1.0* sum / (3*x) ;
}
