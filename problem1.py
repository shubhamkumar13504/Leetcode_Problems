# l1=[2,7,11,15]
# target=9
# THESE ARE MY MISTAKES THAT I HAVE DONE IN THIS
# def func(l1,target):
#     for i,num in enumerate(l1):
#         dict={}
#         complemet=num-target       #SUBSTARCT OPOSITE
#         if complemet in dict:
#             return(dict[complemet],i)    #RETURN TYPE TUPLE []<--()
#         dict[num]=i

class Solution:    # we must have to wrap in a class 
 def twoSum(self,nums,target):
     dict={}
     for i,num in enumerate(nums):
        complemet=target-num
        if complemet in dict:
            return[dict[complemet],i]
        dict[num]=i
