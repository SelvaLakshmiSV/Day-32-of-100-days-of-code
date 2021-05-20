number1 = int(input())
number2 = int(input())
def findingGCD(a,b):
    if a>b:
        small = b
    else:
        small = a
    for num in range(1,small+1):
        if(a%1==0) and (b%1==0):
            GCD = num
    return GCD
print("The GCD is ",findingGCD(number1,number2))
