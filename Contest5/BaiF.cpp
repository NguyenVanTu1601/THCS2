#include<iostream>
#include<bits/stdc++.h>
using namespace std;

main(){
	int t;
	scanf("%d",&t);
	int n;
	int a[10] = {1000,500,200,100,50,20,10,5,2,1};
	while(t--){
		scanf("%d",&n);
		int dem = 0;
		for(int i = 0; i < 10; i++){
			if(n >= a[i]){
				dem += n / a[i];
				n = n % a[i];
			}
		}
		
		printf("%d\n",dem);
	}
    return 0;
}

