x=12321

#Method 1

def isPalindrome( x):

    if (str(x)==str(x)[ : :-1]):
        return 1
    return 0

print(isPalindrome(x))

#Method 2

original=x
reverse=0
while x> 0:
    digit=x%10
    reverse=reverse*10+digit
    x=x//10
if(original==reverse):
    print(1)
else:
    print(0)
