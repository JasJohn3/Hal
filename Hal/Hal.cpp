// Hal.cpp : Defines the entry point for the console application.
//http://www.cplusplus.com/reference/unordered_map/
//https://www.codeproject.com/Articles/13136/Chatterbot-Eliza
//Chat bot Eliza

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <vector>
#include <fstream>
#include <unordered_map>


using namespace std;

typedef pair<string, string> DictionaryPair;
typedef unordered_map<string, string> Dictionary;

int main()
{
	Dictionary newDict;

	while (1)
	{
		system("cls");
		cout << "Hal: Please Enter a Word" << endl;
		cout << "User: ";
		string inputStr = "";
		getline(cin, inputStr);

		if (inputStr == "Exit" || inputStr == "exit")
		{
			break;
		}
		else
		{
			if (newDict.find(inputStr) != newDict.end())
			{
				cout << newDict[inputStr] << endl;
			}
			else if (newDict.find(inputStr) == newDict.end())
			{
				string Definition;
				cout << "Please enter the definition for the word\nUser: ";
				getline(cin, Definition);
				newDict.insert(DictionaryPair(inputStr, Definition));
			}
		}
		

		system("pause");
	}


    return 0;
}


