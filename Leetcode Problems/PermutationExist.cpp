https : // leetcode.com/problems/permutation-in-string/submissions/
        // s1 = "ab", s2 = "eidbaooo"--> True
        // s1 = "ab", s2 = "eidboaoo" ---> False
        class Solution
{
public:
    bool isEqual(int count1[26], int count2[26])
    {
        for (int i = 0; i < 26; i++)
        {
            if (count1[i] != count2[i])
                return 0;
        }
        return 1;
    }
    bool checkInclusion(string s1, string s2)
    {
        int count1[26] = {0}, count2[26] = {0};
        // allocating index for count1
        for (int i = 0; i < s1.length(); i++)
        {
            int index = s1[i] - 'a';
            count1[index]++;
        }
        int i = 0;
        // allocating index for count2 i<s2.length bcz its possible that length of s1>s2 i.e minimum of s1 and s2
        // for better understanding take example if s1="ab" s2="a"
        while (i < s1.length() && i < s2.length())
        {
            int index = s2[i] - 'a';
            count2[index]++;
            i++;
        }
        // checking for the first time
        if (isEqual(count1, count2))
            return 1;
        // windowSize will work here
        while (i < s2.length())
        {
            char newchar = s2[i];
            int index = newchar - 'a';
            count2[index]++;

            char oldchar = s2[i - s1.length()];
            index = oldchar - 'a';
            count2[index]--;

            if (isEqual(count1, count2))
                return 1;
            i++;
        }
        return 0;
    }
};