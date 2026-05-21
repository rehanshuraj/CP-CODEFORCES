#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t; // Read the number of test cases

	while (t--)
	{
		int n;
		cin >> n; // Read the length of the string

		string s;
		cin >> s; // Read the string itself

		int ans = INT_MAX; // Initialize the answer to the maximum integer value

		// Iterate over each character from 'a' to 'z'
		for (char c = 'a'; c <= 'z'; c++)
		{
			int tmp = 0; // Minimum number of characters to delete if we only delete character 'c'
			bool isPoss = true; // Flag to check if it's possible to make the string a palindrome

			int i = 0, j = n - 1; // Two pointers, one starting from the beginning and one from the end

			// Check if the string can be made a palindrome by removing character 'c'
			while (i < j)
			{
				if (s[i] == s[j])
				{
					i++; // Move the left pointer to the right
					j--; // Move the right pointer to the left
					continue; // Continue to the next iteration
				}

				if (s[i] == c)
				{
					tmp++; // Increment the count of deletions
					i++; // Move the left pointer to the right
				}
				else if (s[j] == c)
				{
					tmp++; // Increment the count of deletions
					j--; // Move the right pointer to the left
				}
				else
				{
					isPoss = false; // It's not possible to make the string a palindrome
					break; // Exit the loop
				}
			} //? O(N)

			if (!isPoss)
				tmp = INT_MAX; // If not possible, set tmp to maximum integer value

			ans = min(ans, tmp); // Update the answer with the minimum deletions found
		} //? O(N * 26)

		if (ans == INT_MAX)
			ans = -1; // If no solution was found, set answer to -1

		cout << ans << "\n"; // Output the result for the current test case
	}

	return 0;
}

//! Total time complexity : O(N * 26) = O(N)
//! Total space complexity : O(N)
