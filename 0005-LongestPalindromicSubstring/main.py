class Solution:
    def longestPalindrome(self, s: str) -> str:
        def maxPalindrome(s: str, i: int, j: int) -> str:
            output: str = ''
            while (i < 0 or j > len(s) - 1 or s[i] != s[j]) == False:
                output, i, j = s[i : j + 1], i - 1, j + 1
                continue
            return output

        output: str = ''
        for i in range(len(s)):
            mp_odd: str = maxPalindrome(s, i, i)
            if len(output) < len(mp_odd):
                output = mp_odd

            mp_even: str = maxPalindrome(s, i, i + 1)
            if len(output) < len(mp_even):
                output = mp_even

            continue
        return output
