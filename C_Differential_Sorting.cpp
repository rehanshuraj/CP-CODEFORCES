#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t; // Read the number of test cases

	while (t--)
	{
		int n;
		cin >> n; // Read the size of the array for the current test case

		vector<int> v(n);
		for (int i = 0; i < n; i++) // Read the array elements
			cin >> v[i];

		// Check if the array cannot be sorted by the given operations
		if (v[n - 2] > v[n - 1])
		{
			cout << "-1\n"; // Output -1 if it's impossible to sort
			continue;
		}
		else if (v[n - 1] >= 0)
		{
			// If the last element is non-negative, we can sort the array
			cout << n - 2 << "\n"; // Output the number of operations
			for (int i = 1; i <= n - 2; i++) // Perform operations
			{
				cout << i << " " << n - 1 << " " << n << "\n"; // Output the operations
			}
		}
		else
		{
			// If the last element is negative, check if the array is already sorted
			if (is_sorted(v.begin(), v.end())) // Check if the array is sorted
				cout << "0\n"; // Output 0 if no operations are needed
			else
				cout << "-1\n"; // Output -1 if it's impossible to sort
		}
	}

	return 0;
}

//! Total time complexity : O(N)
//! Total space complexity : O(N)
