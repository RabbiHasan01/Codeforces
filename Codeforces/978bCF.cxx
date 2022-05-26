
#include <iostream>
using namespace std;


int main(int argc, char *argv[])
{
	int n;
	cin>>n;
	string s,a="",b="xxx",c;
	cin>>s;
	int count=0;
	for(int i=0;i<n-2;i++){
		a+=s[i];a+=s[i+1];a+=s[i+2];
		cout <<a<<endl;
		if(a==b) count++;
		a="";
	}
	cout << count <<endl;
}