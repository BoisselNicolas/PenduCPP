#include <iostream>

using namespace std;

string inputWord;
string inputLetter;
int size = 0;
string str;
bool inf = false;
bool result = false;
int indexSubstr = 0;
int indexSubstrTwo = 1;


void drawTheWord();

int main(){

    while(result == false){
        
        cout << " Veuillez saisir un mot. " << endl ;
        cin >> inputWord ;
        cout << endl ;

        size = inputWord.size();
        size = size + 1;

        string letterArray[size];
        
        cout << endl;
        for (size_t i = 0; i != size; i++)
        {
            if(inf == false){
                letterArray[i] = inputWord.substr (indexSubstr,indexSubstrTwo);
                indexSubstr ++;
                inf = true ;
            }else{
                letterArray[i] = inputWord.substr (indexSubstr,indexSubstrTwo);
                indexSubstr ++;
                indexSubstrTwo ++;
            }
        };
        
        cout << " Choisissez une lettre " ;
        cin >> inputLetter ;
        cout << endl;

        for (size_t i = 0; i < size; i++)
        {
            if(letterArray[i] == inputLetter){
                cout << "Tu as trouvé une lettre ! " << endl;
            }
        }
    }
    
    


    return 0;
}

