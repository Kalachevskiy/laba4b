#include <iostream>
#include <locale>
using namespace std;


int rec(int& firstElement, int currIndex = 0, int maxIndex = 0, int maxNumber = 0)
{

	if (currIndex == firstElement)
		return maxIndex + 1;
	int number;
	cout << "������� ����� # " << currIndex + 1 << ": ";
	cin >> number;
	if (maxIndex == 0)
	{
		maxIndex = 1;
		maxNumber = number;
	}

	else if (number > maxNumber)
	{
		maxIndex = currIndex;
		maxNumber = number;
	}
	return rec(firstElement, currIndex + 1, maxIndex, maxNumber);
}

int iter(int n)
{
	int maxNumber;
	int number;
	int index = 0;
	cout << "������� ����� # " << 1 << ": ";
	cin >> number;
	maxNumber = number;
	for (int i = 1; i < n; i++)
	{
		cout << "������� ����� # " << i + 1 << ": ";
		cin >> number;
		if (number > maxNumber)
		{
			maxNumber = number;
			index = i;
		}
	}
	return index + 1;
}
int main()
{
	setlocale(LC_ALL, "ru");
	int n;
	cout << "������� ����� ������������������: ";
	cin >> n;
	cout << "������ ���� ����� - " << iter(n) << endl;
	cout << "������ ���� ����� - " << rec(n) << endl;
}
