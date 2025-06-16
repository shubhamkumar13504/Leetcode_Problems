nums=[1,1,2,3,3,4,4,5,6,8,8]

def func(nums):
        dict = {}
        k = 0
        for i, num in enumerate(nums):
            if num not in dict:
                dict[num] = True
                nums[k] = num  # Update the list in-place which is want in this question
                k += 1
        
        return (k,nums[:k])
print(func(nums))
# print(nums)
