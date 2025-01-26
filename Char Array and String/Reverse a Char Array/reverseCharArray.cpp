#include <iostream>
#include <cstring>
using namespace std;


void reverseCharArray(char word[], int n ){
    int i = 0, j = n-1;
    while(i <= j){
        swap(word[i],word[j]);
        i++;
        j--;
    }
    cout << "Reversesd Word is " << word << "." << endl;
}

int main(){

    cout << "*********************************** Reverse a Character Array ***********************************" << endl;

    char word[20];
    cout << "Enter a word: ";
    cin >> word;

    cout << endl;
    reverseCharArray(word, strlen(word));
    cout << endl;
    

    return 0;
}