https : // www.codingninjas.com/codestudio/problems/sum-of-two-arrays_893186
        
vector<int> findArraySum(vector<int> &a, int n, vector<int> &b, int m)
{
    // Write your code here.
    int i = a.size() - 1, j = b.size() - 1;
    inr carry = 0, sum = 0;
    vector<int> ans;
    // int base=10; if i want addition of binary number in two array then base would be 2
    while (i >= 0 || j >= 0)
    {
        int val1 = a[i], val2 == b[j];
        sum = val1 + val2 + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
        j--;
    }
// NO of digits in array 1 is greater than array2
    while (i >= 0)
    {
        int val1 = a[i];
        sum = val1 + carry;
        carry = sum / 10;
        sum = sum % 10; // value=sum%10;
        ans.push_back(sum);
        i--;
        
    }
    // NO of digits in array 2 is greater than array1
    while (j >= 0)
    {
        int val2 == b[j];
        sum = val2 + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        
        j--;
    }
    // if last carry is not 0
    while (carry != 0)
    {
        sum = carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
    }
    reverse(ans.begin(), ans.end());
    return ans;
}