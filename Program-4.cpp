#include <bits/stdc++.h>
using namespace std;

map<int, int> getTotalCountOfMultiple(vector<int> &nums)
{
    map<int, int> totalCount;
    for (int i = 1; i <= 9; i++)
    {
        bool zeroMultiple = true;
        for (int ele : nums)
        {
            if (ele % i == 0)
            {
                totalCount[i]++;
                zeroMultiple = false;
            }
        }
        if (zeroMultiple)
        {
            totalCount[i] = 0;
        }
    }
    return totalCount;
}

int main()
{
    int n;            // To take how many no. of inputs
    cin >> n;         // Taking user input
    vector<int> nums; // To store the user input
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        nums.push_back(ele);
    }

    map<int, int> mp = getTotalCountOfMultiple(nums); // getting answer in the for of map i.e dictionary
    for (auto p : mp)
    {
        cout << p.first << ": " << p.second << "\n";
    }
    return 0;
}