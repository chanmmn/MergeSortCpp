// ConAppSetFind.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// CPP program to demonstrate the 
// set::find() function 
//#include <bits/stdc++.h> 

#include <iostream>
#include <iterator>
#include <set>
using namespace std;
int main()
{

	// Initialize set 
	set<int> s;

	s.insert(1);
	s.insert(4);
	s.insert(2);
	s.insert(3);
	s.insert(5);

	// iterator pointing to 
	// position where 2 is 
	auto pos = s.find(3);
	if (pos == s.end())
	{
		cout << "not found" << endl;
	}
	// prints the set elements 
	cout << "The set elements after 3 are: ";
	for (auto it = pos; it != s.end(); it++)
		cout << *it << " " << endl;

	//Erare the 2 
	s.erase(2);
	//loop through the whole set 
	cout << "After delette" << endl;
	for (auto it1 = s.begin(); it1 != s.end(); it1++)
		cout << *it1 << " " << endl;
	return 0;
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
