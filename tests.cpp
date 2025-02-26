#include "lungu.h"

void run_tests()
{
	char output[1024];

	const char* input1 = "abfc_af_eef";
	lungu::process_string(input1, output);
	assert(std::strcmp(output, "af_e") == 0);
}

int main()
{
	run_test();
	return 0;
}
