class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        i: int = 0

        while i < len(nums):
            j: int = i + 1

            while j < len(nums):
                if nums[i] + nums[j] == target:
                    return [i, j]

                j = j + 1
                continue

            i = i + 1
            continue

        return [-1, -1]
