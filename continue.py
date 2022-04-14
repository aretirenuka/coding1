n=int(input())
for i in range(1,n):
    if i%2==0 and i%3==0:
        continue
    print(i,end=' ')
    
