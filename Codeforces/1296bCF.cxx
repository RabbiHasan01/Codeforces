#include <iostream>
using namespace std;


int main(int argc, char *argv[])
{
	int t;
	cin>>t;
	while(t--){
		long long s;
		cin>>s;
		long long a=s,b,c=0;
		while(1){
		    b=s%10;//
			s=s/10; //1,1
			a+=s;//20,21
			s+=b;//1+9=10
			if(s<10) break;
		//	cout <<"a="<<a <<"\ns=" <<s<<endl;
			/*
			s-=10;
			s++;
			c++;*/
		//	if(s<10) break;
		}
		cout <<a+c<<endl;
	}
}










