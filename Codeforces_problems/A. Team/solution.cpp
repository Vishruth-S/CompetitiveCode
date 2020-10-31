#include <iostream>

int main()
{
  //Creation of vars
	int n, a, b, c, count = 0;
  //Take in input for n lines
	std::cin >> n;
  //Loop for n
	for (int i = 0; i < n; i++)
	{
    //Take in user input
		std::cin >> a;
		std::cin >> b;
		std::cin >> c;
    //If more than 2 are sure then they will do the problem
		if (a + b + c >= 2)
    //Increase problem count
			count++;
	}
  //Return problem count
	std::cout << count;
	return 0;
}
