#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int *p = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> p[i];
	}

	int start = 0;
	int rear = 0;
	int i = 0;
	for (; i < n; i++)
	{
		if (p[i] >= 0) {
			start = i;
			break;
		}
	}
	rear = start;
	int max = p[start];
	int sum = max;
	for (int temp = start + 1; temp < n; temp++)
	{
		sum += p[temp];
		if (p[temp] >= 0 && sum >= max)
		{
			max = sum;
			rear = temp;
		}
	}
	if (i == n)
	{
		cout << 0 << " " << p[0] << " " << p[n - 1] << endl;
	}
	else
	{
		int sum = 0;
		for (int k = start; k <= rear; k++)
			sum += p[k];
		cout << sum << " " << p[start] << " " << p[rear] << endl;
	}

	delete[]p;

	return 0;
}