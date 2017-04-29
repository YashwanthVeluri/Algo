#include <bits/stdc++.h>
using namespace std;
int a[100];

void QuickSort(int a[],int i, int n);
int Partition(int a[], int s, int h);
            
int main(){
	int n,i;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	QuickSort(a,0,n-1);
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";
	return 0;
}

void QuickSort(int a[],int i, int n){
	int p;
	if(n < i)
		return;

	p = Partition(a,i,n);
	QuickSort(a,i,p-1);
	QuickSort(a,p+1,n);
}

int Partition(int a[], int s, int h){
	int x=s,i;

	for(i=s;i<h;i++){
		if(a[i]<=a[h]){
			swap(a[i],a[x]);
			x++;
		}
	}
	swap(a[x],a[h]);
	return x;
}