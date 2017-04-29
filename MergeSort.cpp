#include <bits/stdc++.h>
using namespace std;
int a[100];

void M(int a[],int l[], int r[], int ls, int rs){
  int i=0,j=0,k=0;
  while(i<ls && j<rs){
    if(l[i]<=r[j]){
      a[k]=l[i];
      i++;
    }
    else{
      a[k]=r[j];
      j++;
    }
    k++;
  }
  while(i<ls){
    a[k]=l[i];i++;k++;
  }
  while(j<rs){
    a[k]=r[j];j++;k++;
  }
}

void MS(int a[],int n){
  if(n < 2)
    return;
  int m = n/2;
  int l[m],r[n-m],i;
  for(i=0;i<m;i++)
    l[i]=a[i];
  for(i=m;i<n;i++)
    r[i-m] = a[i];
  MS(l,m);
  MS(r,n-m);
  M(a,l,r,m,n-m);
}

int main()
{
  int n,i;
  cin>>n;
  for(i=0;i<n;i++)
    cin>>a[i];
  MS(a,n);
  for(i=0;i<n;i++)
    cout<<a[i]<<" ";
  return 0;
}