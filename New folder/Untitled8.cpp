#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include "conio.h"

using namespace std;
const int Max_Points=5;
int letterFill (char, string, string&);
string words_rand ();

int main ()
{
  

char letter;
int Points=0;
string word;
string words[] ={"skyrim","warhammer","dune"};
//******Random*******

//srand(time(0));
//int i=0;
//i=rand()% 3;


//******Maska*******

//******Vieta Jusu reklamai*******




word = words_rand ();
string unknown(word.length(),'.');

do 
{
// word = words_rand ();
//string unknown(word.length(),'.');  
   cout << "\n" << unknown;
   cout << "\nMini burtu: ";

   letter = getch();
   system("cls");

   if (letterFill(letter, word, unknown)==0)
   {
   cout << endl << "Nav tada burta:" << endl;
   Points++;
   }
   else
   {
   cout << endl << "Ir tads burts saja spele: " << endl;
   }
   cout << "Tev ir: " <<  Points;
   cout << " punkti." << endl;
   if (word==unknown)
   {
   cout << word << endl;
   cout << "Uzmineji!";
   }

   if(Points == Max_Points || letter == '0' )
   {   
   cout << "\nGAME OVER" << endl;
   cout << "Vards : " << word << endl;
   system("pause");
   return 0;
   }
  
}
   while (Points < Max_Points);
 
   cin.ignore();
   cin.get();
   system("pause");
   return 0;
}

string words_rand ()
{
string word;
string words[] ={"skyrim","warhammer","dune"};
//******Random*******
srand(time(0));
int i=rand()% 3;
word = words[i];
return word;    
}

int letterFill (char guess, string secretword, string &guessword)
{
    int i;
    int matches=0;
    int len=secretword.length();
    for (i = 0; i< len; i++)
    {
   if (guess == guessword[i])
   return 0;
   if (guess == secretword[i])
   {
   guessword[i] = guess;
   matches++;
   }
   }
return matches;
}
