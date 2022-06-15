class Solution
{
public:
    // ["a","a","b","b","c","c","c"] return no of elemets in --> ["a","2","b","2","c","3"]
    int compress(vector<char> &chars)
    {
        int i = 0;
        int ansIndex = 0;
        while (i < chars.size())
        {
            int j = i + 1;
            int count = 1;
            while (j < chars.size() && chars[i] == chars[j])
            {
                count++;
                j++;
            }
            chars[ansIndex++] = chars[i];
            if (count > 1)
            {
                string str = to_string(count);
                for (auto c : str)
                {
                    chars[ansIndex++] = c;
                }
            }
            i = j;
        }
        return ansIndex;
    }
};