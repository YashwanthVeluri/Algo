#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i,v,j;
	cin>>n;
	int a[n];
	for (i = 0; i < n; ++i)
		cin>>a[i];
	for(i=1;i<n;i++){
		j = i - 1;
		v = a[i];
		while(j >= 0 && a[j-1]>v){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=v;
	}
}		