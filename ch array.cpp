#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
char a[n+1];

for(int i=0;i<n;i++){
	cin>>a[i];
}
int m;
cin>>m;
char s;
cin>>s;
for(int i=n;i>m;i--){
	a[i]=a[i-1];
}	
a[m]=s;
for(int i=0;i<=n;i++){
	cout<<a[i]<<" ";
}
}
