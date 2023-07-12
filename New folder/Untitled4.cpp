#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[]){
   ifstream in("usman.txt");
   
   string name[10];
   if(!in){
      cout << "Cannot open file.";
      exit (1);
   }
   char str[255];
  
   while(in){
      in.getline(str, 255);      
	  cout << str << endl;
      
   }
   in.close();
   
}
