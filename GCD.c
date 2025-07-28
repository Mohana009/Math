#include<stdio.h>
int GCD(int a, int b){
		if(a == 0)	return b;
		else if(b == 0)	return a;
		else{
			if(a > b)	GCD(a - b, b);
			else GCD(a, b - a);
			
		}	
	}
int FindGCD(int A[], int n){
	int res = A[0];
	for(int i = 0; i < n; i++){
		res = GCD(res, A[i]);	
		if(res ==  1)	return 1;
	}
	return res;
}
int main(){
	int n;
	scanf("%d", &n);
	int A[n];
	for(int i = 0; i < n; i++)	scanf("%d", &A[i]);
	int Ans = FindGCD(A, n);
	printf("%d", Ans);
}
