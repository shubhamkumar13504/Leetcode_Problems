s="MCXCII"

def func(s):
    total=0
    prev =0
    dict={
        'M': 1000,
        'D':500,
        'C': 100,
        'L':50,
        'X':10,
        'V':5,
        'I':1,
    }
    for i in s[::-1]:
        if prev <= dict[i] :
            total += dict[i]
        else:
            total -= dict[i]
        prev=dict[i]
    return total
print(func(s))