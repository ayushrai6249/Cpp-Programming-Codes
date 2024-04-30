#include <iostream>
#include <vector>
using namespace std;
int  main()
{
    // LeetCode Question 75
    // https://leetcode.com/problems/sort-colors/

    // M1
    // class Solution
    // {
    // public:
    //     void sortColors(vector<int> &nums)
    //     {
    //         int  n = nums.size();
    //         int  x0 = 0, x1 = 0, x2 = 0;
    //         for (int  i = 0; i < n; i++)
    //         {
    //             if (nums.at(i) == 0)
    //             {
    //                 x0++;
    //             }
    //             else if (nums.at(i) == 1)
    //             {
    //                 x1++;
    //             }
    //             else
    //             {
    //                 x2++;
    //             }
    //         }
    //         for (int  i = 0; i < n; i++)
    //         {
    //             if (i < x0)
    //             {
    //                 nums.at(i) = 0;
    //             }
    //             else if (i < (x1 + x0))
    //             {
    //                 nums.at(i) = 1;
    //             }
    //             else
    //             {
    //                 nums.at(i) = 2;
    //             }
    //         }
    //     }
    // };

    // M2
    class Solution
    {
    public:
        void sortColors(vector<int> &nums)
        {
            int  n = nums.size();
            int  low = 0, mid = 0, hig = n - 1;
            while (mid <= hig)
            {
                if (nums.at(mid) == 2)
                {
                    int  temp = nums.at(mid);
                    nums.at(mid) = nums.at(hig);
                    nums.at(hig) = temp;
                    hig--;
                }
                else if (nums.at(mid) == 0)
                {
                    int  temp = nums.at(mid);
                    nums.at(mid) = nums.at(low);
                    nums.at(low) = temp;
                    low++;
                    mid++;
                }
                else
                {
                    mid++;
                }
            }
        }
    };
    return 0;
}