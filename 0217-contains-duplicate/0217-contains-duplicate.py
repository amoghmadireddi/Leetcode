class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        existing = set()
        for num in nums:
            if num in existing:
                return True
            existing.add(num)
        return False
        