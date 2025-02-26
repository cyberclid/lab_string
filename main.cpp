#include "lungu.h"

int main()
{
	char input[1024];
	std::cin.getline(input, sizeof(input));

	char output[1024];
	int result = lungu::process_string(input, output);

	if (result != 0)
	{
		std::cerr << "Error processing string" << std::endl;
		return 1;
	}

	std::cout << output << std::endl;
	return 0;
}

