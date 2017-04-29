#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i,x;
	int a[n];
	cout<<"Enter the size : ";
	cin>>n;
	cout<<"Enter the elements\n";
	for(i=0;i<n;i++)
		cin>>a[i];
	cout<<"Enter the element to search : ";
	cin>>x;
	for(i=0;i<n;i++)
		if(a[i]==x){
			cout<<i+1<<endl;return 0;
		}
	cout<<-1<<endl;
	return 0;
}