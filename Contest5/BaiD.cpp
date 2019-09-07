#include<stdio.h>
using namespace std;

main(){
	int n;
	scanf("%d",&n);
	int a[n+1];
	for(int i = 0; i < n; i++){
		scanf("%d",&a[i]);
	}
	int t = 1;
	int kt = 0;
	for(int i = 0; i < n - 1; i++){
		kt = 0;
		for(int j = 0; j < n- 1- i; j++){
			if(a[j] > a[j+1]) {
				int temp  = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
				kt = 1;	
			}	
		}
		if(kt == 0) break;
		//cout <<"Buoc " << t << ": ";
		printf("Buoc %d: ",t);
		t++;
		for(int i = 0; i < n; i++){
		    //cout << a[i] << " ";
		    printf("%d ",a[i]);
		}
		//cout << endl;
		printf("\n");
	}
    return 0;
}

