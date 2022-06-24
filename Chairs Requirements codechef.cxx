
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	
	int T;
	cin>>T;
	while(T--){
	   int X,Y;
	   cin>>X>>Y;
	   if(Y>=X) cout <<0 <<endl;
	   else cout << X-Y <<endl;
    }
}