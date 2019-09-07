#include<iostream>
#include<bits/stdc++.h>
using namespace std;

main(){
	int t;
	cin >> t;
	int n;
	while(t--){
		cin >> n;
		int a[n+1];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		int dem = 1;
		int kt = 1;
		for(int i = 0; i < n - 1; i++){
			for(int j = i + 1; j < n; j++){
				if(a[i] == a[j]) {
					dem++;
					kt = 0;
					printf("%d\n",a[i]);
					break;
				}
			}
			if(dem == 2) break;
		}
		if (kt == 1) printf("NO\n");
	
		
	}
    return 0;
}

