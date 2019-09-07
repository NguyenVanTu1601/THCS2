#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void Swap(int &a, int &b){
	int temp = a;
	a = b; 
	b = temp;
}
main(){
	int n;
	scanf("%d",&n);
	int a[n+1];
	for(int i = 0; i < n; i++){
		scanf("%d",&a[i]);
	}
	for(int i = 0; i < n; i++){
		for(int j = i; j > 0; j--)
		if(a[j] < a[j - 1]) Swap(a[j], a[j-1]);
		printf("Buoc %d: ", i);
		
		for(int k = 0; k <= i; k++){
			printf("%d ", a[k]);
		}
		printf("\n");
	}
    return 0;
}

