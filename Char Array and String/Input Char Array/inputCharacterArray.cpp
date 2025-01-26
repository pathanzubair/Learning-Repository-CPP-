#include <iostream>
#include <cstring>
using namespace std;

int main(){

    cout << " ************************* Input Character Array *************************" << endl;

    char word[10];
    cout << "Enter the word: ";
    cin >> word;                // Ignores word after white spaces. This is used to enter the single word  at a time


    cout << endl;
    cout << "Your entered word is " << word << ".";
    cout << endl;
    
    // cout << "The length of the string: "<< strlen(word);
    // cout << endl;
    
    // TO Enter the sentence we use following method
    char sentence[30];
    cout << "Enter the sentence: ";
    cin.getline(sentence,30);

    cout << "Your entered sentence is " << sentence;
    cout << endl;
    cout << "Length of the sentence is " << strlen(sentence);
    cout << endl;
    cout << "#############################################";
    cout << endl;

    char sentence2[30];
    cout << "Enter the sentence: ";
    cin.getline(sentence2,30, '@');    // here third parameter is delemeter

    cout << "Your entered sentence is " << sentence2;
    cout << endl;
    cout << "Length of the sentence is " << strlen(sentence2);
    cout << endl;

    // Example
        // Enter the sentence: zubair@ pathan
        // Your entered sentence is zubair
        // Length of the sentence is 6

        // We can access any letter from the sentence using indexes

        cout << sentence2[5] << endl;
        cout << endl;

        // Example Output:-
        // Enter the sentence: zubair@ pathan
        // Your  entered sentence is zubair
        // Length of the sentence is 6

    return 0;
}