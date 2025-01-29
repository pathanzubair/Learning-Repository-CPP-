#include <iostream>
#include <cstring>
#include <string>

using namespace std;
int lowercaseVowels(string s){
    int count = 0;
    for(int i = 0; i < s.length(); i++){
        if((s[i] == 'a') || (s[i] == 'e') || (s[i] == 'i') || (s[i] == 'o') || (s[i] == 'u')){
            count++;
        }
        
    }
    return count;


}


int main(){
    cout << " ******************************* Count Lowercase Vowels in the Iput String *******************************" << endl;
    string str1;
    cout << "Enter a string: ";
    getline(cin, str1);

    cout << "Count of Lowercase Vowels = " << lowercaseVowels(str1) << endl;


    return 0;
}