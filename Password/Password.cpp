#include <iostream>

struct Password
{
	char value[16];
	bool incorrect;
	Password() : value(""), incorrect(true)
	{
	}
};

int main()
{
	std::cout << "Enter your password to continue:" << std::endl;
	Password pwd;
	std::cin >> pwd.value;

	if (!strcmp(pwd.value, "********"))
		pwd.incorrect = false;

	if(!pwd.incorrect)
		std::cout << "Congratulations\n";

	return 0;
}

// the input is 1234567890123451. the first 15 numbers are not important, they just fill value. the 16th one is applied to incorrect, so anything with 16 characters will work.
