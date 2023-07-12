#include<iostream>
using namespace std;

class book{
	
	private :
		int  bookid;
		string title,author;
		double price , quantity;
	public:	int sold1=50;
		public:
			
            void input(int id,string t,string aut,double p)
			{
				bookid=id;
				title=t;
				author=aut;
				price=p;
				quantity;
			}
	void display()
	{
		cout<<"\nBook id : "<< bookid;
		cout<<"\nBook name : "<< title;
		cout<<"\nauthor name : "<< author;
		cout<<"\nBook price : "<< price;
		cout<<"\nBook quantity avible : "<< quantity;
	}
	public:
	void purchase ()
	{
		cout<<"Enter the  book quantity to buy : ";
		cin>>quantity;
		sold1=sold1-quantity;
		
	}
	public:
	
	void sold()
	{
		
	//	cout<<"Enter the quantity book you buy : ";
	  //  cin>>sold
		//quantity=quantity-sold;
		cout<<"book are avible fo salle : "<<sold1;
	}
};


main()
{
	
	book b1;
	
	
	int a;
	cout<<"1:purchase  2: sell ";
	cin>>a;
	switch(a){
		case 1:
		{
			b1.input(12,"oop","thomas",1200);
	        b1.display();
			b1.purchase();
			}
			break;
		case 2:
		{
			b1.sold();
			
				
			}break;
	}
	

}

