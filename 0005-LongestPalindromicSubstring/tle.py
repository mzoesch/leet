class Solution:
    def longestPalindrome(self, s: str) -> str:
        def isPalindrome(_s: str) -> bool:
            i, j = 0, len(_s) - 1
            while i < j:
                if _s[i] == _s[j]:
                    i, j = i + 1, j - 1
                    continue
                return False
            return True

        if len(s) == 1:
            return s

        output = ''
        i = 0
        while i < len(s) - 1:
            j = len(s)
            while i < j:
                if len(output) < len(s[i:j]) and isPalindrome(s[i:j]) == True:
                    output = s[i:j]
                j -= 1
                continue
            i += 1
            continue

        return output
