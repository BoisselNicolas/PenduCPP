#include <iostream>

using namespace std;

string inputWord;
string inputLetter;
string str;

bool result = false;

int size = 0;
int score = 0;

void initGame();
void weHaveAWinner();

int main(){

    initGame();

    string letterArray[size];
    string hiddenWord[size];

    for (size_t i = 0; i < size; i++)
    {
        letterArray[i] = inputWord[i];
        hiddenWord[i] = "*";
        cout << hiddenWord[i];
    }

    while(result == false){
        
        cout << endl << "Choisissez une lettre :" << endl ;
        cin >> inputLetter ;

        for (size_t i = 0; i < size; i++)
        {
            if(letterArray[i] == inputLetter){
                hiddenWord[i] = letterArray[i];
                score = score + 1;
            }
            cout << hiddenWord[i] ;
        }
        weHaveAWinner();
    }
}

void initGame(){
    cout << endl << "Veuillez saisir un mot. " << endl ;
    cin >> inputWord ;
    size = inputWord.size();
}

void weHaveAWinner(){
    if(score == size){
        result = true;
        cout << endl << "FELICITATION !" << endl;
    }
}