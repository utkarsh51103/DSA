num1=float(input())
num2=float(input())
num3=float(input())

if (num1<num2) and (num3<num2):
    print(num2)
    
elif(num1>num2) and (num3<num1):
    print(num1)

else: print(num3)