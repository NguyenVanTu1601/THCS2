#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	struct node *pLeft;
	struct node *pRight;
};

typedef struct node NODE;
typedef NODE* Tree;

void Khoi_tao(Tree &t){
	t = NULL;
}

void Them_node(Tree &t , int x){
	if(t == NULL){
		NODE *p = new NODE;
		p->data = x;
		p->pLeft = NULL;
		p->pRight = NULL;
		t = p;
	}
	else{
		if(x > t->data){
			Them_node(t->pRight,x);
		}
		else if(x < t->data){
			Them_node(t->pLeft,x);
		}
	}
}
int dem = 0;
int Node_La(Tree t){
	if(t != NULL){
		if(t->pLeft == NULL && t->pRight == NULL){
			dem++;
			//cout << t->data<< " ";
		}
		Node_La(t->pLeft);
		Node_La(t->pRight);
	}
    return dem;
}

main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a;
		Tree x;
	    Khoi_tao(x);
		for(int i = 1; i <= n; i++){
			cin >> a;
			Them_node(x,a);
		}
		cout << n - Node_La(x) << endl;
		dem = 0;
	}

	
    return 0;
}

