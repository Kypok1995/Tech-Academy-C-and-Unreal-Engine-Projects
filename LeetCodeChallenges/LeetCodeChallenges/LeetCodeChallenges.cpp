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

/* Given an integer array nums sorted in non-decreasing order, remove some duplicates in-place such that each unique element appears at most twice. 
The relative order of the elements should be kept the same.
Return k after placing the final result in the first k slots of nums.

Class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int k=0;
        int size = nums.size();
        for (int i = 0; i < size; i++){
          if(i < size-2 && nums[i] == nums[i+2]){
              continue;
          }
          else{
              nums[k++] = nums[i];
          }
    }
            return k;
    }
};*/

/* Given an array nums of size n, return the majority element.

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int size = nums.size();
        int majorityCandidate = -1;
        int count = 0;

        for (int i = 0; i < size; i++) {
            if (count == 0) {
                majorityCandidate = nums[i];
                count = 1;
            } else if (nums[i] == majorityCandidate) {
                count++;
            } else {
                count--;
            }
        }

        return majorityCandidate;
    }

};
*/

/* Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        vector<int> temp(n,0);
        for(int i=0;i<k;i++){
            temp[i]=nums[n-k+i];
        }
        for(int i=0;i<n-k;i++){
            temp[k+i]=nums[i];
        }
        nums=temp;
    }

};
*/

/* You are given an array prices where prices[i] is the price of a given stock on the ith day. 
* Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lsf = INT_MAX; // least so far
        int op = 0; // overall profit
        int pist = 0; // profit if sold today
        
        for(int i = 0; i < prices.size(); i++){
            if(prices[i] < lsf){ // if we found new buy value which is more smaller then previous one
                lsf = prices[i]; // update our least so far
            }
            pist = prices[i] - lsf; // calculating profit if sold today by, Buy - sell
            if(op < pist){ // if pist is more then our previous overall profit
                op = pist; // update overall profit
            }
        }
        return op; // return op 
}
};
*/

/* Given a roman numeral, convert it to an integer.
class Solution {
public:
    int romanToInt(string s) {

    char arr[s.length() + 1];

    strcpy(arr, s.c_str());
    int result = 0;

    for(int i = 0; i < s.length(); i++){
        cout<<arr[i]<<"\n";
    }
    cout<<"String to char array conversion:\n";
    for (int i = 0; i < s.length(); i++){
    if(arr[i] == 'I'){
        if(arr[i+1] == 'V'){
            result +=4;
            cout<<"Add 4 to result"<<endl;
            continue;
        }
        else if(arr[i+1] == 'X'){
            result +=9;
            cout<<"Add 9 to result"<<endl;
            continue;
        }
        result += 1;
        cout<<"We add 1 to result"<<endl;
    }

    else if(arr[i] == 'V'){
        if(i> 0 && arr[i-1] =='I'){
            continue;
        }
        result += 5;
        cout<<"We add 5 to result"<<endl;
    }

    else if(arr[i] == 'X'){
            if(i > 0 && arr[i-1] =='I'){
            continue;
        }
            else if(arr[i+1] == 'L'){
            result +=40;
            cout<<"Add 40 to result"<<endl;
            continue;
        }
        else if(arr[i+1] == 'C'){
            result +=90;
            cout<<"Add 90 to result"<<endl;
            continue;
        }
        result += 10;
        cout<<"We add 10 to result"<<endl;
    }


        else if(arr[i] == 'L'){
            if(i > 0 && arr[i-1] == 'X'){
                continue;
            }
        result += 50;
        cout<<"We add 50 to result"<<endl;
    }

        else if(arr[i] == 'C'){
                if(i > 0 && arr[i-1] == 'X' ){
                continue;
            }
            if(arr[i+1] == 'D'){
            result +=400;
            cout<<"Add 400 to result"<<endl;
            continue;
        }
        else if(arr[i+1] == 'M'){
            result +=900;
            cout<<"Add 900 to result"<<endl;
            continue;
        }
        result += 100;
        cout<<"We add 100 to result"<<endl;
    }


        else if(arr[i] == 'D'){
                if(i > 0 &&arr[i-1] == 'C' ){
                continue;
            }
        result += 500;
        cout<<"We add 500 to result"<<endl;
    }

        else if(arr[i] == 'M'){
                if(i > 0 && arr[i-1] == 'C' ){
                continue;
            }
        result += 1000;
        cout<<"We add 1000 to result"<<endl;
    }

    }

return result;
    }
};*/

/* Given a string s consisting of words and spaces, return the length of the last word in the string.
class Solution {
public:
    int lengthOfLastWord(string s) {
        string si;
        stringstream ss(s);
        vector<string> v;

        while (getline(ss, si, ' ')) {
            v.push_back(si);
        }

        int size = v.size();
        string lastWord;

        for (int i = size; i > 0; i--) {
            if (v[i - 1].length() == 0) {
                continue;
            }
            lastWord = v[i - 1];
            break;
        }

        char arr[lastWord.length() + 1];
        strcpy(arr, lastWord.c_str());

        int number = 0;
        for (int i = 0; i < lastWord.length(); i++) {
            number += 1;
        }

        return number;
    }
};
*/

/*  Write a function to find the longest common prefix string amongst an array of strings.
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

    if (strs.empty()) {
        return ""; // Return an empty string if the input vector is empty
    }

    // Find the shortest string in the array
    string shortest = strs[0];
    for (const string& str : strs) {
        if (str.length() < shortest.length()) {
            shortest = str;
        }
    }

     for (int i = 0; i < shortest.length(); ++i) {
        char currentChar = shortest[i];
        for (const string& str : strs) {
            if (str[i] != currentChar) {
                return shortest.substr(0, i); // Return the prefix found so far
            }
        }
    }

    return shortest;
    }
};*/

/* Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.
class Solution {
public:
    int strStr(string haystack, string needle) {
         size_t found = haystack.find(needle);

    if (found>= 0){
          return found;
    }
    else{
        return -1;
    }
    }
};*/

/* Given a string s, return true if it is a palindrome, or false otherwise.
class Solution {
public:
    bool isPalindrome(string s) {

        string cleanStr;
     for (char c : s) {
        if (std::isalnum(c)) {
            cleanStr += std::tolower(c);
        }
    }

        int left = 0 ;
        int right = cleanStr.length() - 1;

        while (left < right){
            if(cleanStr[left] != cleanStr[right]){
                return false;
            }

            left++;
            right--;
        }
        return true;
    }
};
*/

/* Given two strings s and t, return true if s is a subsequence of t, or false otherwise.
class Solution {
public:
    bool isSubsequence(string s, string t) {
    int sIdx = 0; // Index for string s
    int tIdx = 0; // Index for string t

    while (sIdx < s.length() && tIdx < t.length()) {
        if (s[sIdx] == t[tIdx]) {
            sIdx++; // Move to the next character in s
        }
        tIdx++; // Always move to the next character in t
    }

    // If we reached the end of s, s is a subsequence of t
    return sIdx == s.length();
}

};
*/

/* Given two strings s and t, return true if t is an anagram of s, and false otherwise.
public class Solution {
    public bool IsAnagram(string s, string t) {
       if (s.Length != t.Length)
            return false;

        Dictionary<char, int> charFrequency = new Dictionary<char, int>();

        // Count the character frequency in string s
        foreach (char c in s)
        {
            if (charFrequency.ContainsKey(c))
            {
                charFrequency[c]++;
            }
            else
            {
                charFrequency[c] = 1;
            }
        }

        // Decrement the character frequency for string t
        foreach (char c in t)
        {
            if (charFrequency.ContainsKey(c))
            {
                charFrequency[c]--;
                if (charFrequency[c] < 0)
                {
                    return false; // Character frequency in t exceeds that in s
                }
            }
            else
            {
                return false; // Character in t not found in s
            }
        }

        return true; // If all characters in s and t match
}
};
*/

/* Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
public class Solution {
    public int[] TwoSum(int[] nums, int target) {
    int [] resultArray = new int [2];

        for (int i = 0; i < nums.Length; i++){
            for(int y = i+1; y < nums.Length; y++){
                if(nums[i] + nums[y] == target){
                    resultArray[0] = i;
                    resultArray[1] = y;
                }
            }
        }

        return resultArray;
    }
}
*/

int main()
{
    //Solution mySolution = new Solution();
}

