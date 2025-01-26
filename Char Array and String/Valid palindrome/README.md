## Example

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<pre>
********************************** Valid Palindrome **********************************
<strong>Enter a word :</strong> s = &quot;RaCecar;
<strong>Output:</strong> RaCecar is a valid palindrome.
</pre>





#### Code

``` cpp

#include <iostream>
#include <cstring>
// #include <string>

using namespace std;

bool validPalindrome(char word[], int n){
    int first = 0, last = n-1;
    while(first < last){
        while(first < last && !isalnum(word[first])){
            first++;
        }
        while(first < last && !isalnum(word[last])){
            last--;
        }
        
        if(tolower(word[first]) != tolower(word[last])){
            cout << word << " is not a valid Palindrome."<< endl;
            return false;
        }
        first++;
        last--;
    }
    cout << word << " is a valid palindrome." << endl;
    return true;
}
int main(){

    cout << "********************************** Valid Palindrome **********************************" << endl;
    char word[20];
    cout << "Enter a word : ";
    cin >> word;

    cout << endl;
    validPalindrome(word,strlen(word));
    cout << endl;



    return 0;
}

```
