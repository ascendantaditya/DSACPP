'''FIRST QUESTION'''
class Solution:
    def addedInteger(self, nums1: List[int], nums2: List[int]) -> int:
        nums1.sort()
        nums2.sort()
        n = len(nums1)
        ans= [-nums1[i]+nums2[i] for i in range(n)]
        return ans[0]
    
'''SECOND QUESTION'''
from collections import Counter

class Solution:
    def minimumAddedInteger(self, nums1: List[int], nums2: List[int]) -> int:
        n = len(nums2)
        
        ctr1, ctr2 = Counter(nums1), Counter(nums2)
        
        for x in range(-1005, 1005):
            is_valid = True
            for y in nums2:
                if ctr1[y - x] < ctr2[y]:
                    is_valid = False
                    break
                    
            if is_valid:
                return x
            
            '''THIRD QUESTION'''

class Solution:
    def minEnd(self, n: int, x: int) -> int:
        base = []
        for i in range(60):
            if (1 << i) & x == 0:
                base.append(1 << i)
                
        answer = x
        for i in range(30):
            if (1 << i) & (n - 1) > 0:
                answer += base[i]
                
        return answer
    

    '''FOURTH QUESTION'''
class Solution:
    def medianOfUniquenessArray(self, nums: List[int]) -> int:
        n = len(nums)
        
        def count(var):
            right = 0
            seen = {}
            
            answer = 0
            for left in range(n):
                if left > 0:
                    x = nums[left - 1]
                    seen[x] -= 1
                    if seen[x] == 0:
                        del seen[x]
                        
                while right < n and len(seen) < var:
                    x = nums[right]
                    seen[x] = seen.get(x, 0) + 1
                    right += 1
                    
                if len(seen) == var:
                    answer += n - right + 1
                    
            # print(var, answer)
            return answer
        
        ptr_left, ptr_right = 1, n
        target = (n**2 + n) // 4
        
        while ptr_left != ptr_right:
            ptr = (ptr_left + ptr_right + 1) // 2
            
            if count(ptr) > target:
                ptr_left = ptr
            else:
                ptr_right = ptr - 1
                
        return ptr_left
                        