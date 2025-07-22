# https://leetcode.com/problems/longest-palindromic-substring/

class Solution:
    def longestPalindrome(self, s: str) -> str:
        longPalindrome = ""

        for i in range(len(s)):
            palindrome = expandCenter(s, i, i)

            if len(palindrome) > len(longPalindrome):
                longPalindrome = palindrome

            palindrome = expandCenter(s, i, i+1)

            if len(palindrome) > len(longPalindrome):
                longPalindrome = palindrome

        return longPalindrome

def expandCenter(s, left, right):
    while left >= 0 and right < len(s) and s[left] == s[right]:
        left -= 1
        right += 1

    return s[left+1:right]