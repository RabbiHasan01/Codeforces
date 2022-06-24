
#include <iostream>
#include <string>
using namespace std;;
int main(int argc, char *argv[])
{
	
	int t;
	cin>>t;
	while(t--){
		int n;
		string s,str="";
		cin>>n>>s;
		string a="00",b="01",c="10",d="11";
		
		for(int i=0;i<n;i+=2){
			 string x="";
			 x+=s[i];x+=s[i+1];
			 if(x==a) str+="A";
			 else if(x==b) str+="T";
			 else if(x==c) str+="C";
			 else str+="G";
		}
		cout << str<<endl;
	}
}




