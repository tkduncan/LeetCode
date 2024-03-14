class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        previous_map = {}
        for i, n in enumerate(nums):
            if target - nums[i] in previous_map:
                return [previous_map[target - nums[i]], i]
            previous_map[n] = i
        return []