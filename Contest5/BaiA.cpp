#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void sapxep(int a[], int n){
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j++){
			if(a[i] > a[j]){
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
		
		printf("Buoc %d: ",i+1);
		for(int i = 0; i < n; i++){
			printf("%d ",a[i]);
		}
		printf("\n");
	}
	
}
main(){
	int n;
	scanf("%d",&n);
	int a[n+1];
	for(int i = 0; i < n; i++) scanf("%d",&a[i]);
	sapxep(a,n);
    return 0;
}

