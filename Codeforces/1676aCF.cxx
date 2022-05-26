

#include <iostream>
#include <string>
using namespace std;


int main(int argc, char *argv[])
{
	int t;
	cin>>t;
	while(t--){
		string s,str="";
		cin>>s;
		int x=0;
	//	int x=(atoi(s[0])+stoi(s[1])+stoi(s[2]))-(stoi(s[3])+stoi(s[4])+stoi(s[5]));
	    for(int i=0;i<3;i++){
	    	str+=s[i];
	    	x+=stoi(str);
	    	str="";
	    }
	    for(int i=3;i<6;i++){
	    	str+=s[i];
	    	x-=stoi(str);
	    	str="";
	    }
		if(x==0)  cout <<"YES\n";
		else cout <<"NO\n";
	}
}





