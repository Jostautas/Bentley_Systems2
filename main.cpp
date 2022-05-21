#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;

void set_letters(vector<char> &letters){
    letters.clear();
    for(int i = 0; i < 7; i++){
        letters.push_back('B');
        letters.push_back('A');
        letters.push_back('L');
        letters.push_back('L');
        letters.push_back('O');
        letters.push_back('O');
        letters.push_back('N');
    }
}

int main(){
    string S = "BAOOLLNNOLOLGBAX";
    vector<char> str;
    vector<char> letters;
    int numOfLetters = 0;

    for(int i = 0; i < S.size(); ++i){
        str.push_back(S[i]);
    }

    while(true){
        set_letters(letters);
    
        for(int i = 0; i < str.size(); ++i){
            for(int j = 0; j < (letters.size()-43); ++j){
                if(str[i] == letters[j]){
                    letters.erase(letters.begin()+j);
                    str.erase(str.begin()+i);
                    --i;
                    --j;
                    break;
                }
            }
        }
        if(letters.size() > 43){ // letter.size() starts at 50 (???)
            break;
        }
        else{
            ++numOfLetters;
        }
    }

    cout << numOfLetters << endl;
    return 0;
}