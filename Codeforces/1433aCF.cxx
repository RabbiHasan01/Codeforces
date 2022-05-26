
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
	int t;
	cin>>t;
	while(t--){
		string s,str="";
		int n;
		cin>>s;
		str+=s[0];
		n=stoi(str);//string to integer
		int len =s.size();
		/*ok but*/
		if(len==1) cout <<(n-1)*10+1;
		else if(len==2) cout <<(n-1)*10+3;
		else if(len==3) cout <<(n-1)*10+6;
		else cout <<n*10;
		/*
		int count=0;
		for(int i=1;i<=s.size();i++) count+=i;
		cout << (n-1)*10+count;*/
		cout <<endl;
		
	}
}
















