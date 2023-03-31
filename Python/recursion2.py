def power(x, y):
      
    # If x^0 return 1
    if (y == 0):
        return 1
      
    # If we need to find of 0^y
    if (x == 0):
        return 1
      
    # For all other cases
    return x * power(x, y - 1)
   
# Driver Code
x =11
y=100
print(power(x, y))