x = -567
x_abs = abs(x)
print(x_abs)
# original = x_abs
reversed = 0
        
while x_abs > 0:
        digit = x_abs % 10
        reversed = reversed * 10 + digit
        x_abs = x_abs // 10
if(x<0) :
        reversed= -reversed
print(reversed)