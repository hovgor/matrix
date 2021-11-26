#include <iostream>
void matr(int);
int main()
{
	std::cout << "enter array size: ";
	int size;
	std::cin >> size;
	matr(size);
	return 0;
}
void matr(int size)
{
	int **arr = new int *[size];
	for (int i = 0; i < size; ++i)
	{
		arr[i] = new int[size];
	}
	std::cout << "enter array value\n";
	int k = 1;
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; ++j)
		{
			std::cin >> arr[i][j];
		}
	}
	std::cout << std::endl
			  << "its your array \n"
			  << std::endl;

	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; ++j)
		{
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}

	for (int i = 0; i < size; ++i)
	{
		int tmp = arr[i][i];
		arr[i][i] = arr[i][size - 1 - i];
		arr[i][size - 1 - i] = tmp;
	}

	int gumar = 0;
	int bazm = 1;
	for (int i = 0; i < size; ++i)
	{

		gumar += arr[i][i] + arr[i][size - 1 - i];
		bazm *= arr[i][i] * arr[i][size - 1 - i];
	}
	std::cout << std::endl
			  << "its your array swap \n"
			  << std::endl;
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; ++j)
		{
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}

	std::cout << std::endl
			  << "its your arrey diagonals adder: " << gumar << std::endl;
	std::cout << std::endl
			  << "its your array diagonals multyplay: " << bazm << std::endl
			  << std::endl;

	for (int i = size - 1; i >= 0; --i)
	{
		delete[] arr[i];
	}
		delete [] arr;
	arr= nullptr;

}
