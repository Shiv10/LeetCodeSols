class Solution:
    def reverseWords(self, s: str) -> str:
        a = s.split()
        a = list(reversed(a))
        return " ".join(a)
        