
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	string s,str="";
	cin>>s;
//	char str[100];
    int c=0;
	for(int i=0;i<s.size();i++){
	     if(s[i]>='A' and s[i]<='Z'){
	     	s[i]=s[i]+32;
	     }
	 
	 //	if(s[i]!='a' or s[i]!='e' or s[i]!='i' or s[i]=='o' or s[i]!='u' or s[i]!='A' or s[i]!='E' or s[i]!='I' or s[i]!='O' or s[i]!='U'){
	    	if(s[i]!='o'){
	    		if(s[i]!='a'){
	    			if(s[i]!='e'){
	    				if(s[i]!='i'){
	    					if(s[i]!='u'){
	    						if(s[i]!='y'){
		                        	str+=s[i];
		   	                 // cout << str<< " ";
		                                         }
	    									}
	    								}
	    							}
	    						}
	    					}
	}
/*	for(int i=0;i<str.size();i++){
		if(str[i]>='A' and str[i]<='Z'){
			str[i]=str[i]+32;
		}
	}*/
	
	for(int i=0;i<2*str.size();i++){
	      if(i%2==0){
	      	cout << ".";
	      }else{
	      	cout << str[c] ;
	      	c++;
	      }
	}
//	cout << str <<endl;						
								
}											
								
 

	
						
					
						
								
}     	c++;
	      }
	}
//	cout << str <<endl;

	
		
			
				
					
						
								
}