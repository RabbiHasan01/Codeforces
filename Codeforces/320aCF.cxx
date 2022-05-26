

#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
	string s,w="1",x="144",y="14",z="",p="";
	cin>>s;
	if(s.size()==1 && s=="1"){
		cout << "YES\n";
	}
	else if(s.size()>1){
	for(int i=0;i<s.size();i++) z+="#";
	for(int i=0;i<s.size()-2;){
		p+=s[i];p+=s[i+1];p+=s[i+2];
		//cout <<p <<endl;
		if(p==x){
			s[i]='#';
			s[i+1]='#';
			s[i+2]='#';
			i+=3;
		}else i++;
		p="";
	}
//	cout <<s <<endl;
	for(int i=0;i<s.size()-1; ){
		p+=s[i];p+=s[i+1];
		//cout <<p <<endl;
		if(p==y){
			s[i]='#';
			s[i+1]='#';
			i+=2;
		}else i++;
		p="";
	}
//	cout <<s<<endl;
	for(int i=0;i<s.size();i++){
		p+=s[i];
		//cout <<p <<endl;
		if(p==w){
			s[i]='#';
		}
		p="";
	}
//	cout << s<<endl;
	if(s==z)
	   cout << "YES" <<endl;
	else
	   cout <<"NO\n";
	}else {
		cout <<"NO\n";
	}
	
	
	
	
	
	
}