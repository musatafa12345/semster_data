#include<iostream>
using namespace std ;
int main()
   {
		cout<< "Enter you bank name "<< "\n""\n";
	     string name ;
	    cin>> name;
	  if(name=="hbl")
	    {
	    	cout<<"Enter the sectre number "<<endl;
	    	long int id;
	    	cin>>id;
	    	if(id==5617||id==2311||id==6816)
	    	{
	    		cout<<"1.fast cash"<<"\n";
	    		cout<<"2. cash whit draw"<<"\n";
	    		cout<<"5.cheak blance"<<"\n";
	    		int a;
	    		cin>>a;
	    		switch(a)
	    		{
				
	    		    case 1:
	    		    {
	    				cout<<"1. 5000"<<"\n";
	    				cout<<"2. 10000"<<"\n";
	    				cout<<"3. 15000"<<"\n";
	    				cout<<"4. 20000"<<"\n";
	    				cout<<"5. 25000"<<"\n";
	    			  long	int num;
	    				cin>>num;
	    				if(num==5000&&num==10000&&num==15000&&num==20000&&num==25000)
	    				cout<<"Recive your cash:"<<num;
	    	
					  }
				       break;
				       case 2:
				       {
				     	cout<<"Enter the cash"<<"\n";
				     	double cash;
				       	cin>>cash;
				     	cout<<"reacive your cash :"<<"\t"<<cash;
					
			         	}
			         	break;
			         	   case 3:
			         	   	{
			         	   		cout<<"your blance is:"<<"\n";
							}
							break;
		    	}
			}
     	}
     	     
     	                                                     
       if(name=="ubl")
	    {
	    	cout<<"Enter the sectre number "<<endl;
	    	long int ps;
	    	cin>>ps;
	    	if(ps==1756||ps==1123||ps==1668)
	    	{
	    		cout<<"1.fast cash"<<"\n";
	    		cout<<"2. cash whit draw"<<"\n";
	    		cout<<"5.cheak blance"<<"\n";
	    		int b;
	    		cin>>b;
	    		switch(b)
	    		{
				
	    		    case 1:
	    		    {
	    				cout<<"1. 2500"<<"\n";
	    				cout<<"2. 5000"<<"\n";
	    				cout<<"3. 10000"<<"\n";
	    				cout<<"4. 15000"<<"\n";
	    				cout<<"5. 20000"<<"\n";
	    			  long	int num;
	    				cin>>num;
	    				if(num==2500&&num==5000&&num==10000&&num==15000&&num==20000)
	    				cout<<"Recive your cash:"<<num;
	    	
					  }
				       break;
				       case 2:
				       {
				     	cout<<"Enter the cash"<<"\n";
				     	double cash;
				       	cin>>cash;
				     	cout<<"reacive your cash :"<<"\t"<<cash;
					
			         	}
			         	break;
			         	   case 3:
			         	   	{
			         	   		cout<<"your blance is:"<<"\n";
							}
							break;
		    	}
			}
     	}
     	     
     	            else if(name=="hcb")
	                {
	            	cout<<"Enter the sectre number "<<endl;
	            	long int pd;
	            	cin>>pd;
	            	if(pd==8901||pd==0011||pd==9816)
	            	{
	    	     	cout<<"1.fast cash"<<"\n";
	    	     	cout<<"2. cash whit draw"<<"\n";
	    	     	cout<<"5.cheak blance"<<"\n";
	    	      	int c;
	    	      	cin>>c;
	    		   switch(c)
	    	    	{
				
	    		         case 1:
	    		        {
	    				cout<<"1. 2000"<<"\n";
	    				cout<<"2. 4000"<<"\n";
	    				cout<<"3. 12000"<<"\n";
	    				cout<<"4. 24000"<<"\n";
	    				cout<<"5. 36000"<<"\n";
	    			    long	int num;
	    				cin>>num;
	    				if(num==2000&&num==4000&&num==12000&&num==24000&&num==36000)
	    				cout<<"Recive your cash:"<<num;
	    	
					     }
				          break;
				           case 2:
				           {
				         	cout<<"Enter the cash"<<"\n";
				        	double cash;
				       	    cin>>cash;
				          	cout<<"reacive your cash:"<<"\t"<<cash;
					
			            	}
			            	break;
			         	     case 3:
			         	     	{
			         	   		cout<<"your blance is:"<<"\n";
						    	}
						    	break;
		            	}
		        	}
            	}
     	     
     	     

return 0;
system("pause");
   }
