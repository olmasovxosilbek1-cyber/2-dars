N = int(input())

for i in range(1,N+1):
    yigindi=0
    son = i
    while son>0:
        yigindi+=son%10
        son = son//10
    
    if yigindi == 10:
        print(i,end=" ")
 