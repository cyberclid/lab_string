#include "lungu.h"
namespace lungu
{

    int process_string(const char *input, char *output)
    { 
	int counts[256] = {0};

	for (int i = 0; input[i] != '\0'; ++i)
	{
		counts[static_cast<unsigned char>(input[i])]++;
	}

	int j = 0;
	for (int i = 0; input[i] != '\0'; ++i)
	{
		if (counts[static_cast<unsigned char>(input[i])] > 1)
		{
			output[j++] = input[i];
			counts[static_cast<unsigned char>(input[i])] = 0;
		}
	}
	output[j] = '\0';

	return 0;
    }
}
