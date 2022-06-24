#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int t;
	cin>>t;
	while(t--){
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		int x=0;
		if(a<b) x++;
		if(a<c) x++;
		if(a<d) x++;
		cout <<x <<endl;
	}
}