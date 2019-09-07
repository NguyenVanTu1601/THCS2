#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define Max 100005
int check[Max];
struct So{
	long long so;
	long long solan;
	long long vitri;
};
bool cmp(So x, So y){
	if(x.so != y.so) return x.so > y.so;
	else return x.vitri < y.vitri;
}
bool cmp2(So x, So y){
	if(x.solan != y.solan) return x.solan > y.solan;
	else{
		return x.vitri < y.vitri;
	}
}
long long a[Max+10];
So arr[Max + 5];
So ax[Max+5];


main(){
	ios_base::sync_with_stdio(false);
	int n;
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			check[i] = 0;
			arr[i].so = a[i];
			arr[i].vitri = i;
			arr[i].solan = 1;
		}
		sort(arr,arr+n,cmp);
		
//		for(int i = 0; i < n; i++){
//			cout << arr[i].so << " " << arr[i].solan << " " << arr[i].vitri << endl;
//		}
//		cout << endl;
		if(n == 1) cout << arr[0].so << endl;
		else{
			
			int k = 0;
			for(int i = 0; i < n - 1; i++){
				ax[k].so = arr[i].so;
				ax[k].vitri = arr[i].vitri;
				ax[k].solan = 1;
				if(arr[i].so == arr[i+1].so){
					while(arr[i].so == arr[i+1].so){
						ax[k].solan = ax[k].solan + 1;
						i++;
					}
				}
				k++;
			}
			
			if(arr[n-1].so != arr[n-2].so){
				ax[k].so = arr[n-1].so;
				ax[k].solan = 1;
				ax[k].vitri = arr[n-1].vitri;
				k++;
			}
			
	//		for(int i = 0; i < k; i++){
	//			cout << ax[i].so << " " << ax[i].solan << " " << ax[i].vitri << endl;
	//		}
	
			sort(ax,ax+k,cmp2);
			for(int i = 0; i < k; i++){
				for(int j = 0; j < ax[i].solan; j++){
					cout << ax[i].so << " ";
				}
			}
			cout << endl;
		}	
    }
    return 0;
}

