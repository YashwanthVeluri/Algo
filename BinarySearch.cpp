#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i,x,l,h,m;
	int a[n];
	cout<<"Enter the size : ";
	cin>>n;
	cout<<"Enter the elements\n";
	for(i=0;i<n;i++)
		cin>>a[i];
	cout<<"Enter the element to search : ";
	cin>>x;
	l=0;
	h=n-1;
	sort(a,a+n);
	while(l<=h){
		m=(l+h)/2;
		if(a[m]==x){
			cout<<m+1<<endl;return 0;
		}
		else if(a[m]>x)
			h=m;
		else 
			l=m;
	}
	cout<<-1<<endl;return 0;}