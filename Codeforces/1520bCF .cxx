
#include <iostream>
#include <string>
using namespace std;
int main(int argc, char *argv[])
{
	int t;
	cin>>t;while(t--){
		
	string s, x="",str="";
	cin>>s;
	x+=s[0];
	for(int i=0;i<s.size();i++){
		str+=s[0];
	}
	long long int a,b,c;
	a=stoi(s);
	b=stoi(str);
	c=stoi(x);
	
	if(a>=b){
		cout <<(s.size()-1)*9+c;
	}else {
		cout <<(s.size()-1)*9+(c-1);
	}
	cout <<endl;
	}
}
















9+num/p<<endl;
	*/
	string s, x="",str="";
	cin>>s;
	x+=s[0];
	for(int i=0;i<s.size();i++){
		str+=s[0];
	}
	long long int a,b,c;
	a=stoi(s);
	b=stoi(str);
	c=stoi(x);
	
	if(a>=b){
		cout <<(s.size()-1)*9+c;
	}else {
		cout <<(s.size()-1)*9+(c-1);
	}
	cout <<endl;
/*	int j=0;
	for(int i=1;i<=b; ){
		x[j]=i;
		j++;
	}
	
	*/
	}
}









