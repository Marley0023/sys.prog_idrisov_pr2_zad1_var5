using namespace std;

#include <iostream>

int main()
{
	setlocale(0, "rus");
	int M[6];
	int i;
	srand(time(0));
	for (i = 0; i < 6; i++)
	{
		M[i] = 1 + rand() % 20;
	}
	for (i = 0; i < 6; i++)
	{
		cout << M[i] << " ";
	}
	int min;
	min = M[0];
	for (i = 1; i < 6; i++)
	{
		if (min > M[i])
		{
			min = M[i];
		}
		else
		{
			min = min;
		}
	}
	cout << "\nМинимальное значение массива: " << min;
}

