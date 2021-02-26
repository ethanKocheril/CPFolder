def fibonacci(n):
    if(n <= 1):
        return 1
    return fibonacci(n - 2) + fibonacci(n - 1)
sum = 0
result = 0
count = 1
while(sum <= 4000000):
    num = fibonacci(count)
    sum += num
    count += 1
    if(num % 2 == 0):
        result += num
print(result) 
