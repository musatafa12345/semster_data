#include <iostream>
#include <iomanip>
 
using namespace std;
 
class time{
	
	
    private:
        int seconds;
        int hh,mm,ss;
    
    
	public:
        void get()
        {
    cout << "Enter time:" << endl;
    cout << "Hours?   ";          cin >> hh;
    cout << "Minutes? ";          cin >> mm;
    cout << "Seconds? ";          cin >> ss;
    }
    
	    void convertIntoSeconds()
        {
    seconds = hh*3600 + mm*60 + ss;
   }
   
    
	
	    void display()
        {
    cout << "The time is = " << setw(2) << setfill('0') << hh << ":"
                             << setw(2) << setfill('0') << mm << ":"
                             << setw(2) << setfill('0') << ss << endl;
    cout << "Time in total seconds: " << seconds;
   }
};
 
 
int main()
{
    time t1; 
     
    t1.get();
    t1.convertIntoSeconds();
    t1.display();
     
    return 0;
}
