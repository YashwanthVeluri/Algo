#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i,m,j;
	cin>>n;
	int a[n];
	for (i = 0; i < n; ++i){
		cin>>a[i];
	}
	for(i=0;i<n;i++){
		m = i;
		for(j=i+1;j<n;j++){
			if(a[j]<a[m])
				m=j;
		}
		swap(a[i],a[m]);
	}
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";
	return 0;
}