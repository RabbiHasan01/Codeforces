
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	
	int x,y;
	x=min(a,min(c,d));
	y=min(a-x,b);
	
	cout << x*256+y*32 <<endl;
	
}