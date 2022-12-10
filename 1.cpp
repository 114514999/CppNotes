#include <bits/stdc++.h>
using namespace std;

int main(){
	string s1,s2;
	cin>>s1>>s2;
	int a1[1005]={},a2[1005]={},a3[1005]={};
	int l1=s1.length(),l2=s2.length();
	for(int i=0;i<n1;i++)
		a1[i]=s1[l1-i-1]-48;
	for(int i=0;i<l2;i++)
		a2[i]=s2[l2-i-1]-48;
	int l=max(l1,l2),x=0;
	for(int i =0;i<l;i++){
		a3[i]=a1[i]+a2[i]+x;
		x=a3[i]/10;
		a3[i]=a3[i]%10;
	}
	if(x>0)
		a3[l++]=x;
	for(int i=l-1;i>=0;i--){
		cout<<a3[i];
	}
	return 0;
}
