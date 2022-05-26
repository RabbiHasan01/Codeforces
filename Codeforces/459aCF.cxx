
#include <iostream>
using namespace std;


int main(int argc, char *argv[])
{
	int x1,x2,x3,x4,y1,y2,y3,y4;
	cin>>x1>>y1>>x2>>y2;
	int mx=max(max(x1,y1),max(x2,y2));
	
	if(x1==x2){
		cout <<mx <<" " <<min(y1,y2) <<" ";
		cout << mx <<" "<<mx <<endl;
	}else if(y2==y1) {
		cout <<min(x1,x2) <<" " <<mx <<" ";
		cout << mx <<" "<<mx <<endl;
	}else {
		cout <<x1 <<" " <<y2 <<" " <<y2 <<" " <<y1 <<endl;
	}
	
}















