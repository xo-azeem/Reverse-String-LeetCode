// Code

class Solution {
public:
    void reverseString(vector<char>& s) 
    {
      // This commented out logic works fine but the Time Complexity is 10 times greater than reverse function as used below.
      
      /*int n = s.size();

	    for (int i = 0; i < n; i++)
		    s.emplace(s.end(), s[n - i - 1]);

	    for (int i = 0; i < n; i++)
		    s.erase(s.begin());*/

        std::reverse(s.begin(), s.end());
    }
};
