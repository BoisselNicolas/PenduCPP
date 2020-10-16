#include <iostream>

using namespace std;

string inputWord;
string inputLetter;
int size = 0;
int sizeTwo = 0;
string str;
bool inf = false;
bool result = false;
int indexSubstr = 0;
int indexSubstrTwo = 1;
int score = 0;


int main(){

    cout << " Veuillez saisir un mot. " << endl ;
    cin >> inputWord ;
    cout << endl ;

    size = inputWord.size();
    size = size + 1;
    sizeTwo = size - 1;

    string letterArray[size];
    string hiddenWord[size];
    
    cout << endl;

    for (size_t i = 0; i < sizeTwo; i++)
    {
        letterArray[i] = inputWord[i];
        hiddenWord[i] = "*";
        cout << hiddenWord[i];
    }

    cout << endl;

    while(result == false){
        inputLetter = "";
        
        cout << "Choisissez une lettre :" ;
        cin >> inputLetter ;
        cout << endl;

        for (size_t i = 0; i < sizeTwo; i++)
        {
            if(letterArray[i] == inputLetter){
                
                hiddenWord[i] = letterArray[i];
                score = score + 1;
                
            }
            
            cout << hiddenWord[i] ;
        }
       cout << endl ;

       if(score == sizeTwo)
       {
            result = true;
        }
    }

    cout << "FELICITATION !" << endl;
}

