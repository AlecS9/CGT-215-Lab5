// CGT 215 Lab5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

void getWord()
{
    vector<char> charVector({ 'V','F','X','B','L','I','T','Z','J','R','P','H','D','K','N','O','W','S','G','U','Y','Q','M','A','C','E' });
    string words;
    string outPut = "";
    cout << "Input text to cypher: ";
    getline(cin, words);
    int position = 0;
    
    for (int i = 0; i < words.length(); i++)
    {
        int position = 0;
        position = (int)words.at(i);

        if (words.at(i) >= 65 && words.at(i) <= 90)
        {
            //position = (int)words.at(i);
            outPut.push_back(charVector[position - 65]);
        }

        else if (words.at(i) >= 97 && words.at(i) <= 122)
        {
            //position = (int)words.at(i);
            outPut.push_back(tolower(charVector[position - 97]));
        }

        else outPut.push_back(position);

    }
    cout << "Encoded Message: " << '\"' << outPut << '\"';
}
int main()
{
    getWord();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
