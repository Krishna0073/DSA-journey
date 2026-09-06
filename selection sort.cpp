//selection sort
#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int>a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		int temp=i;
		for(int j=i+1;j<n;j++){
			if(a[j]<a[temp]){
				temp=j;
			}
		}swap(a[i],a[temp]);
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	
	}
