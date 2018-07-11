#include <iostream>
using namespace std;

void main()
{
	// 'c' is the temporary variable for bubble sorting
	int a[20], i, j,n,c=0;
	cout << "Enter the number of elements you want to sort"<<endl;
	cin >> n;
	cout << "Enter the " << n << " elements" << endl;
	for (i = 0; i < n; i++)
		cin >> a[i];
	for (i = 0; i < n; i++)                       
	{
		for (j = i+1; j < n; j++)
		{
			if (a[i] > a[j])
			{
				c = a[i];
				a[i] = a[j];
				a[j] = c;
			}
		}
	}
	// Print output
	cout << "Numbers in ascending order : ";
	for (i = 0; i < n; i++)
		cout << " "<<a[i];
	cin >> i;
	
	cout << "Done" <<endl;
}
