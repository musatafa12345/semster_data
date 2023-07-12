#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// Function Declaration
string getRandWord();
void checkLetter(char&, string&, int&, string&);

// main function
int main() {

    // str Variables
    string RandomWord = getRandWord();
    string hiddenWord = "";

    // int Variables
    unsigned long int _length_ = RandomWord.length();
    int chances = int(_length_)+1;
    char newLetter;

    // fill varialbe with characters
    hiddenWord.append((_length_),'_');

    cout << "The Word is "<< _length_ <<" letters long." << endl;

    // game loop
    while(chances > 0){
        // request (char) input
        cin >> newLetter;
        checkLetter(newLetter, RandomWord, chances, hiddenWord);

        // check if player won
        if(hiddenWord == RandomWord){
            cout << "Congratulations! You won the game." << endl;
            break;
        }
        // decrease try chances
        chances--;
    }

    return 0;
}


// Functions

void checkLetter(char &newLetter, string &randstr, int &strlen, string &hiddenWord){
    // initiate iterator it
    string::iterator it;

    // iterate trough string
    for(auto it = randstr.begin(); it != randstr.end();++it){
        // validate letter mach
        if(*it == newLetter){
            // replace letter
            hiddenWord.at(it - randstr.begin()) = newLetter;
        }
    }
    cout << hiddenWord << endl;
}

string getRandWord(){
    string filePath = "/Users/nedimkanat/XCODE/testcpp/testcpp/";

    // constants
    enum sizes {
        COUNTER = 0,
        ARRAY_SIZE = 5
    };

    // set seed
    srand((unsigned)time(NULL));

    // get random int between 0 and 5
    int randint = rand() % ARRAY_SIZE;

    // str to store each line from file
    string str;

    // array to store 5 (random) words
    vector<string> arr;

    // initialize file object & open file
    ifstream file(filePath+"words.txt");
    int counter = COUNTER;

    // loop trough file
    if (file.is_open()){
        while (getline(file,str) && counter < ARRAY_SIZE){
            arr.push_back(str);
            counter++;
        }
        file.close();
    } else {
        cout << "File is not open" << endl;
    }

    // send away random word
    if(arr.empty()){
        cout << "CANCER" << endl;
    }
    return arr.at(randint);
}
