/* 
Reverse text without reversing individual words

Input:  Technical Interview Preparation
 
Output: Preparation Interview Technical
*/

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
 
// Function to reverse a text without reversing the individual words.
// Note that string is passed by reference
void reverseText(string &str)
{
    // `str[low…high]` forms a word
    int low = 0, high = 0;
 
    // scan the text
    for (int i = 0; i < str.length(); i++)
    {
        // if space is found, we found a word
        if (str[i] == ' ')
        {
            // reverse the found word
            reverse(str.begin() + low, str.begin() + high + 1);
 
            // reset `low` and `high` for the next word
            low = high = i + 1;
        }
        else {
            high = i;
        }
    }
 
    // reverse the last word
    reverse(str.begin() + low, str.begin() + high + 1);
 
    // reverse the whole text
    reverse(str.begin(), str.end());
}
 
int main()
{
    string str = "Preparation Interview Technical";
 
    reverseText(str);
    cout << str;
 
    return 0;
}


