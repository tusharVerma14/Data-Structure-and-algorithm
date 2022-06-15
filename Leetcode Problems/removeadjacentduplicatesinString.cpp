class Solution
{
public:
// suppose there are k adjacent duplicates just replace ==2 with ==k
// using stack pair
    string removeDuplicates(string s)
    {
        stack<pair<char, int>> st;
        for (auto c : s)
        {
            if (st.empty() || st.top().first != c)
            {
                st.push({c, 1});
            }
            else
            {
                st.top().second++;
            }
            if (st.top().second == 2)
                st.pop();
        }
        string res;
        while (!st.empty())
        {
            res.push_back(st.top().first);
            st.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};
// using vector pair
class Solution
{
public:
    string removeDuplicates(string s)
    {
        vector<pair<char, int>> st;
        for (auto c : s)
        {
            if (st.empty() || st.back().first != c)
            {
                st.push_back({c, 1});
            }
            else
            {
                st.back().second++;
            }
            if (st.back().second == 2)
            {
                st.pop_back();
            }
        }

        string res;
        // not to be reversed bcz as it is a vector so can be traced form 0th index but that's not the case in stack
        for (auto p : st)
        {
            res.append(p.second, p.first);
        }
        return res;
    }
};