#include <iostream>
#include <sstream>
#include <ctype.h>
#include <string>

using namespace std;

int main()
{
	string user_input;
	int number = 0;
	int converted = 0;
	bool user_bool = 0;

	do
	{
		cout << "Enter a number" << endl;
		cin >> user_input;

		if (user_input[0]=='-')
		{
			number++;
		}

		if (user_input[0] == 0 && isdigit(user_input[1]))
		{
			number = 0;
		}
		else
		{
			for (int i = 0; i < user_input.size(); i++)
			{
				if (isdigit(user_input[i]))
				{
					number++;
				}
			}
		}
		
		if (number == user_input.size())
		{
			stringstream object(user_input);
			object >> converted;
			cout << converted << "(number)" << endl;
			user_bool = 1;
		}
		else
		{
			cout << "Invalid number" << endl << endl;;
			
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			
			number = 0;
			converted = 0;
			user_bool = 0;
		}
	} while (user_bool == 0);
}