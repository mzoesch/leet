class Solution:
    def removeElement(self, nums: list[int], val: int) -> int:
        k: int = 0
        j: int = len(nums) - 1

        while k <= j:
            if nums[k] == val:
                nums[k], nums[j] = nums[j], nums[k]
                j -= 1
                continue
            k += 1
            continue

        return k
