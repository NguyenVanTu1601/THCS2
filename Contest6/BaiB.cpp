#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int snt(int i){
	if(i < 2) return 0;
	if(i == 2) return 1;
	if(i > 2) {
		for(int j = 2; j <= sqrt(i); j++){
			if(i % j == 0) return 0;
		}
		return 1;
	}
}
main(){
	int dem = 0;
	long long arr[405];
	for(int i = 2; i <= 2800; i++){
		if(snt(i) == 1){
			arr[dem] = i;
			dem++;
			if(dem > 400) break;
		}
	}
	
	int t;
	cin >> t;
	int z = 1;
	while(t -- ){
		int n;
		cin >> n;
		long long a[n+1][n+1];
		int d = 0;
		int gt = 0;
		int hang = n - 1;
		int cot = n - 1;
		while(d<=n/2){
			for(int i=d;i<=cot;i++) {
				a[d][i]=arr[gt]; 
				gt++;
			}
			for(int i=d+1;i<=hang;i++) {
				a[i][cot]=arr[gt];
				gt++;
			}
			for(int i=cot-1;i>=d;i--){
				a[hang][i]= arr[gt];
				gt++;
			} 
			for(int i=hang-1;i>d;i--) {
				a[i][d]= arr[gt];
				gt++;
			}
			d++; hang--; cot--;
	    }
	    cout <<"Test " << z << ":" << endl;
	    z++;
	    for(int i = 0; i < n; i++){
	    	for(int j = 0; j < n; j++){
	    		cout << a[i][j] << " ";
			}
			cout << endl;
		}
	}
    return 0;
}

