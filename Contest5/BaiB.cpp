#include<iostream>
#include<bits/stdc++.h>
using namespace std;

main(){
	int n;
	scanf("%d",&n);
	int a[n+1];
	int t = 1;
	for(int i = 0; i < n; i++) scanf("%d",&a[i]);
	for(int i = 0; i < n - 1; i++){
		int min = i;
		for(int j = i + 1; j < n; j++){
			if(a[j] < a[min]) min = j;
		}
		int temp = a[i];
		a[i] = a[min];
		a[min] = temp;
		
		printf("Buoc %d: ",t);
		//int kt = 1;
		//a[n] = 1000;
		for(int i = 0; i < n; i++){
			
			printf("%d ",a[i]);
			//if(a[i] > a[i+1]) kt = 0;
		}
		t++;
		printf("\n");
		//if(kt == 1) break;
	}
    return 0;
}

