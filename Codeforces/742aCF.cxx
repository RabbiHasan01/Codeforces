

#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	//while(1){
	long long int n;
	cin>>n;
	//long long int x=pow(8,n);
	//cout << x <<endl;
	if(n%4==0 && n>0) cout << "6";
	else if(n%4==1) cout << "8";
	else if(n%4==2) cout << "4";
	else if(n%4==3) cout << "2";
	else cout <<1;
	cout <<endl;
//	}
}