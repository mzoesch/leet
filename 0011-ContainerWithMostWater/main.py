class Solution:
    def maxArea(self, height: list[int]) -> int:
        water: int = 0
        i, j = 0, len(height) - 1

        while i < j:
            water = max(water, (j - i) * min(height[j], height[i]))
            if height[j] < height[i]:
                j -= 1
            else:
                i += 1

            continue

        return water
