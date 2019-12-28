t = int(input())
for i in range(t):
    arr = [int(x) for x in input().split()]
    start = (arr[0] * 60)+ arr[1]
    end = (arr[2] * 60)+ arr[3]
    
    res = end - start 
    print(res//60,end=" ")
    print(res%60)
