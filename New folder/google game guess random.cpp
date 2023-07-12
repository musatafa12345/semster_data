#include<iostream>
#include<cstring>
int main(){
 
string guess[5];
string password[5];
srand((unsigned)time(0));

string letters[5] = {"_ ","_ ","_ ","_ ","_ "};
char array[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','r','s','t','u','v','z'};

for(int r = 0; r < 5; r++){
    int g = rand() % 24;
    password[r] = array[g];
}

cout << endl;

     for(int z = 0; z < 25; z++)
   {

        cout << "Enter Letter: " << endl;
      cin >> guess[z];

      for(int b = 0; b < 5; b++){
        if(uguess[z] == password[b]){
            letters[b] = guess[b];
            cout << letters[b];
        }else{
            cout << letters[b];
        }
    }
    cout << endl;
}
