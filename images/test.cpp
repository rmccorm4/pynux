#include <iostream>

template <class T>
public class test
{
	public:
		std::vector<T> vec;
	private:
		int x = 123;
		char y = 'R';
}

// This is a comment
int main()
{
	for(int i = 0; i < 1729; i++)
	{
		std::cout << "Useless\tprint\tstatement!" << std::endl;
	}
	
	/* Also a comment */
	return 0;
}
