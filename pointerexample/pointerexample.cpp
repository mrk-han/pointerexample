// pointerexample.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int changeLowerCasetoUpperCase();

int main()
{
	changeLowerCasetoUpperCase();
	char fullname[50];
	char *lastname;

	cout << "please enter fullname" << endl;
	cin.getline(fullname, 50);
	for (lastname = fullname; *lastname != ' '; lastname++)
	{
		;
	}
	*lastname = '\0';
	lastname++;
	cout << "last name is " << lastname << endl;
	cout << "first name is " << fullname << endl;

    return 0;
}

int changeLowerCasetoUpperCase()
{
	char fullname[50];
	char *ptr;

	cout << "please enter string" << endl;
	cin.getline(fullname, 50);

	for (ptr = fullname; *ptr != '\0'; ptr++)
	{
		if (*ptr == 'a')
			*ptr = 'A';
	}
	cout << fullname << endl;

	return 0;
}

