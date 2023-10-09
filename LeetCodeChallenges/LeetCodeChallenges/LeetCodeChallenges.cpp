// LeetCodeChallenges.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <iostream>

/* You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.
Merge nums1 and nums2 into a single array sorted in non-decreasing order.
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int x = n - 1;
        int size = m + n - 1;

        for (int i = size; i >= 0; i--) {
            if (m > 0 && x >= 0) {
                if (nums1[m - 1] > nums2[x]) {
                    nums1[i] = nums1[--m];
                }
                else {
                    nums1[i] = nums2[x--];
                }
            }
            else if (x >= 0) {
                nums1[i] = nums2[x--];
            }

        }
    }
};
*/

/*Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The order of the elements may be changed. 
Then return the number of elements in nums which are not equal to val.
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int index = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[index] = nums[i];
                index++;
            }
        }
        return index;
    }
};
*/
/* Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. 
The relative order of the elements should be kept the same. Then return the number of unique elements in nums.
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if (n <= 1) {
            return n;
        }

        int k = 0;
        for (int i = 1; i < n; ++i) {
            if (nums[i] != nums[k]) {
                ++k;
                nums[k] = nums[i];
            }
        }
        return k + 1;
    }
};
*/

int main()
{
    std::cout << "Hello World!\n";
}

