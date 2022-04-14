n=int(input())
a,b=0,1
while b<n:
    c=a+b
    a=b
    b=c
    print(a,b)
if n-a>b-n:
    print(b)
else:
    print(a)
