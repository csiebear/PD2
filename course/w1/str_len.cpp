#include<iostream>
#include<cstring>//the string.h in Cpp named the cstring

int main(int argc, char ** argv)
{
#ifdef DEBUG
	std::cout<<argv[1]<<"\n";
#endif
	std::cout<<strlen(argv[1])<<"\n";
	return 0;
}
