def fizzBuzz(n):
    for i in range(1,n+1):
        s=""
        if i % 3==0:
            s= s+"Fizz"
        if i % 5 ==0:
            s=s+"Buzz"
        if s=="":
            s=s+str(i)
        print(s)
