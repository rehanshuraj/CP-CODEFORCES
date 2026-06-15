#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t; // Read the number of test cases

	while (t--)
	{
		int n;
		char c;
		cin >> n >> c; // Read the length of the string and the target character

		string s;
		cin >> s; // Read the input string

		//! Check if 0 operations are needed
		bool check0 = true;

		for (int i = 0; i < n; i++)
		{
			if (s[i] != c)
			{
				check0 = false; // If any character is not equal to c, set check0 to false
				break;
			}
		} //? O(n)

		if (check0)
		{
			cout << "0\n"; // If all characters are already c, no operations are needed
			continue;
		}

		//! Check if 1 operation is enough
		int val1 = -1;
		for (long long i = 2; i <= n; i++)
		{
			bool isPoss = true;
			for (long long j = i; j <= n; j += i)
			{
				if (s[j - 1] != c)
				{
					isPoss = false; // If any position divisible by i is not c, set isPoss to false
					break;
				}
			}

			if (isPoss)
			{
				val1 = i; // If possible, store the value of i
				break;
			}
		} //? O(n log n)

		if (val1 != -1)
		{
			cout << "1\n";
			cout << val1 << "\n"; // Output 1 operation and the value of i
			continue;
		}

		// If neither 0 nor 1 operation is enough, output 2 operations
		cout << "2\n";
		cout << n - 1 << " " << n << "\n"; // Output the last two positions
	}

	return 0;
}

//! Total Time Complexity (TC): O(n log n)
//! Total Space Complexity (SC): O(n)
