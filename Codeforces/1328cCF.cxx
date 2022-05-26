
#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int main(int argc, char *argv[])
{
	int t;
	cin>>t;
	while(t--){
		int n;
		string s,s1="1",s2="1";
		cin>>n>>s;

		//if(n==1) cout <<s1<<endl <<1<<endl;
	//	else {
		/*	for(int i=1;i<n;i++){
			if(s[1]=='1') {
			s1+="1";
			s2+="0";
			
			cout <<s1 <<endl;
			cout << s2 <<endl;
			}else {*for(int i=2;i<n;i++){
				s1+="0";
				s2+=s[i];
			}*/
			int c=1,j;
				for(int i=1;i<n;i++){
					if(s[i]=='1') {
						s1+="1";
						s2+="0";
						c=0;
						j=i+1;
						break;
					}else if(s[i]=='2' ){
						s1+="1";
						s2+="1";
					}else {
						s1+="0";
						s2+="0";
					}
				}
				if(c==0){
					for(int i=j;i<n;i++){
				         s1+="0";
				         s2+=s[i];
		         	}
				}
				cout <<s1 <<endl;
				cout << s2<<endl;
	}
}












