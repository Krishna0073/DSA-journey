//Binary search
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
	int h=n-1;
	int l=0;
	int key;
	cin>>key;
	while(h>=l){
		int mid=(h+l)/2;
		if(a[mid]==key){
			cout<<"Found at "<<mid;
			break;
		}
		else if(a[mid]>key){
			h=mid-1;
		}else{
			l=mid+1;
		}
	}
}
