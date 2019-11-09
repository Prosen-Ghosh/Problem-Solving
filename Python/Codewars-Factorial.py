def factorial(n):
    if n < 0 or n > 12:
        raise ValueError 
    return multiply(n)
    
def multiply(n):
    total = 1
    for i in range(1, n+1):
        total *= i
    return total