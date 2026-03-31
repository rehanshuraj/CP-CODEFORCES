#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t; // Read the number of test cases
	while (t--)
	{
		string A, B;
		cin >> A >> B; // Read strings A and B

		// Get the lengths of strings A and B
		long long n = A.size(), m = B.size();
		long long lcs = 0; // Initialize the longest common substring length to 0

		// Iterate over possible lengths of substrings
		for (long long len = 1; len <= min(n, m); len++)
		{
			// Iterate over all starting positions of substrings in A
			for (long long i = 0; i + len <= n; i++)
			{
				// Iterate over all starting positions of substrings in B
				for (long long j = 0; j + len <= m; j++)
				{
					// Extract substrings of length 'len' from A and B
					string extract_A = A.substr(i, len);
					string extract_B = B.substr(j, len);

					// Check if the extracted substrings are equal
					if (extract_A == extract_B)
						lcs = max(lcs, len); // Update the longest common substring length
				}
			}
		}

		// Calculate the minimum number of operations to make A and B equal
		long long operations = n + m - 2 * lcs;
		cout << operations << endl; // Output the result for the current test case
	}
	return 0;
}

// Time Complexity (TC): O(20^4) = O(160000) ~ O(10^5)
// Space Complexity (SC): O(2*20)
