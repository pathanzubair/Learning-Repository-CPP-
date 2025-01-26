#include <iostream>
#include <cstring>

using namespace std;

void toUpperCase(char word[], int n){
    for(int i = 0; i < strlen(word); i++){
        if(word[i] >= 'a' && word[i] <= 'z'){
            word[i] = char( word[i] - 'a' + 'A');
        }
    }
    cout << "The Uppercase version of the entered word is: " << word;

}
void toLowerCase(char word[], int n){
    for(int i = 0; i < strlen(word); i++){
        if(word[i] >= 'A' && word[i] <= 'Z'){
            word[i] = char( word[i] - 'A' + 'a');
        }
    }
    cout << "The Lowercase version of the entered word is: " << word;

}

int main(){
    cout << "*************************** Convert To Uppercase ***************************" << endl;

    char word[10];
    cout << "Enter a word: ";
    cin >> word;
    cout << endl;


    toUpperCase(word, strlen(word));
    cout << endl;

    toLowerCase(word, strlen(word));
    cout << endl;
    


    return 0;
}