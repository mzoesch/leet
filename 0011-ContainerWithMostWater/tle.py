class Solution:
    def maxArea(self, height: list[int]) -> int:
        current_max: int = 0

        for i, s in enumerate(height):
            for j, e in enumerate(height[i + 1 :], start=i + 1):
                h: int = min([s, e])
                if current_max < (new_max := (h * (j - i))):
                    current_max = new_max

        return current_max
