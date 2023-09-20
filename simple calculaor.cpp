#include<iostream>
using namespace std;
int main()
{
	cout<<"A simple Calculator "<<endl;
	while(true){
		double a ,b;
		char op;
		  cout<<"enter the operator:"<<endl;
		  cin>>op;
		  cout<<"enter the number 1:"<<endl;
		  cin>>a;
		    cout<<"enter the number 2:"<<endl;
		  cin>>b;
		  
		  switch(op)
		  {
		  
		  case '+':
		  	cout<<a<<" "<<op<<" "<<b<<"="<<a+b<<endl;
		  	break;
		  	
		  	 case '-':
		  	cout<<a<<" "<<op<<" "<<b<<"="<<a-b<<endl;
		  	break;
		  	
		  	 case '*':
		  	cout<<a<<" "<<op<<" "<<b<<"="<<a*b<<endl;
		  	break;
		  	
		  	 case '/':
		  	 	if(b==0){
		  	 		cout<<"dividing by zero"
				   }
				   else{
				   	cout<<a<<" "<<op<<" "<<b<<"="<<a/b<<endl;
				   }
		  	       break;
		  	
		  }
		  	default:
		  		cout<<"invalid operatr value"
		  }
		    
	return 0;
}
