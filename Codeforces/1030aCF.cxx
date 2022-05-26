
#include <iostream>
using namespace std;
struct {
	int n;
   bool a;
	int x=0;
}s;
int main(int argc, char *argv[])
{
	cin>>s.n;
	//cout <<s.id <<endl;
	for(int i=0;i<s.n;i++){
		cin>>s.a;
		if(s.a==1) s.x=1;
	}
	if(s.x==1) cout <<"HARD\n";
	else cout <<"EASY\n";
	
	
	
	
	
	
}