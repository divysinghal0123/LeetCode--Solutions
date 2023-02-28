class Solution
{
public:
    bool isIsomorphic(string s, string t)
    {

        // if(s.length()!=t.length()) return 0;

        int len = s.length();

        map<char, vector<int>> mp;
        map<char, vector<int>> mp2;

        for (int i = 0; i < len; i++)
        {
            (mp[s[i]]).push_back(i);
        }

        for (int i = 0; i < len; i++)
        {
            (mp2[t[i]]).push_back(i);
        }

        int s1 = mp.size();
        for (int i = 0; i < len; i++)
        {

            auto it = mp[s[i]].begin();
            auto it2 = mp2[t[i]].begin();

            // Iterate through the map and print the elements
            while (it != mp[s[i]].end() && it2 != mp2[t[i]].end())
            {
                if (*it != *it2)
                {
                    return 0;
                }
                ++it;
                ++it2;
            }
        }
        return 1;
    }
};