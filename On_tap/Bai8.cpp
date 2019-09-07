#include<bits/stdc++.h>
using namespace std;
main(){
	
	double c , t=0;
	long long s=1;
	cin >> c;
	long long n = (1.0/c - 1) / 2 + 1;
	for(int i = 0; i <= n; i++){
		if(i % 2 == 0) t += 1.0/(2*i+1);
		else t -= 1.0/(2*i+1);
	}
	printf("%.7lf",4*t);
}
