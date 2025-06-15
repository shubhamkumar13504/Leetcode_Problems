l1=[2,7,11,15]
target=9
def func(l1,target):
    for i,num in enumerate(l1):
        dict={}
        complemet=num-target
        if complemet in dict:
            return(dict[complemet],i)
        dict[num]=i

def twoSum(self, l1, target):
        seen = {}
        for i, num in enumerate(l1):
            complement = target - num
            if complement in seen:
                return [seen[complement], i]
            seen[num] = i
