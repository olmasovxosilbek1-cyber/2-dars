n = int (input( n))
sanoq = 0
for i in range(1,n+1)
    if n%i==0:
        print(i)
        sanoq+=1
print(sanoq)