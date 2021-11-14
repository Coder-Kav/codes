#include<iostream>
using namespace std;
int main()
{
	
char op;
int a,b;
 cout<<"enter operator : +,-,*,/"<<endl;
 cin>>op;
 cout<<"take two input from user :"<<endl;	
 cin>>a>>b;
 cout<<"a="<<a<<"b="<<b<<endl; 
 switch(op)
  {
 	case'+':
 		cout<<a<<"+"<<b<<"="<<a+b;
 		break;
 	case'-':
 		cout<<a<<"-"<<b<<"="<<a-b;
 		break;
 		
 	case'*':
 		cout<<a<<"*"<<b<<"="<<a*b;
 		break;
		 
	case'/':
 		cout<<a<<"/"<<b<<"="<<a/b;
 		break;	 	
	 	
 	
 	
 	
 	default:
 		cout<<"error! output is incorrect";
 	break;
 	
 }
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}