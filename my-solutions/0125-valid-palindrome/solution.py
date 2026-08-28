class Solution:
    def isPalindrome(self, s: str) -> bool:
        s = ''.join(ch for ch in s if ch.isalnum())
        lower = s.lower()
        words = list(lower)

        left = 0
        right = len(words) - 1

        while left < right:
            words[left], words[right] = words[right], words[left]
            left += 1
            right -= 1

        if "".join(words) == lower:
            return True
        else:
            return False
