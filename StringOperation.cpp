#include <iostream>
#include <string>

int findPattern( const char* text, const char* pat)
{
	if( text == nullptr 
			|| pat == nullptr)
		return -1;

	int txtIdx = 0;
	return txtIdx;
}

int main( int argc, char **argv)
{
	if( argc < 3)
	{
		std::cout << "Invalide request param" << std::endl;
		return 0;
	}

	const char* text = argv[1];
	const char* pat = argv[2];

	int patIndex = -1;
	patIndex  = findPattern(text, pat);
	if( patIndex == -1)
	{
		std::cout << "Not found" << std::endl;
	}
	else
	{
		std::cout << "Found at index " << patIndex << std::endl;
	}
	return 0;
}
