//#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
	int n;
	cin>>n;
	int a,b,ans=0;
	//for(int i=0;i<n;i++) cin>>a[i];
	string s1,s2,x="",y="";
	cin>>s1>>s2;
	for(int i=0;i<n;i++){
		x=s1[i];
		y=s2[i];
		a=stoi(x);
		b=stoi(y);
		int p=abs(a-b);
		if(p>5){
			ans+=10-max(a,b)+min(a,b);//
		}else {
			ans+=p;
		}
	}
	
	cout <<ans <<endl;
	
	
	
	
}
