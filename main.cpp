/**
Description: Use two functions to prompt a user and determine how many
             of a certain letter are in a string they entered.
Filename: main.cpp
Author: Colby Hillers
Date: 10/18/18
*/

#include<iostream>
#include<string>

using namespace std;

// Function that takes in a string and then outputs that string
void get_string(string prompt)
{
    cout << prompt;
}

// Function counts how many times char chr is in string str
int char_count(string str, char chr)
{
    int count = 0;
    char letter;
    // Convert chr to lowercase to make comparing easier
    chr = tolower(chr);
    // Loop through string str to compare every letter to chr
    for(int i = 0; i < str.length(); i++)
    {
        // Convert every letter of str to lowercase
        letter = tolower(str[i]);
        // If letter is equal to chr then add 1 to count variable
        if(letter == chr)
            count++;
    }
    // Count is equal to how many times chr was found in str
    return count;
}

int main()
{
    string user_str;
    char user_chr;

    get_string("Enter a string of text: ");
    cin >> user_str;
    get_string("Enter a character: ");
    cin >> user_chr;

    cout << "The character " << user_chr  << " was in your string " 
    << char_count(user_str, user_chr) << " time(s)." << endl; 
    
    return 0;
}
