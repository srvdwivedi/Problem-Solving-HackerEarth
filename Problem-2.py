n1=1 
n2=2 
sum=0
while (n2<= 4000000):
    if n2%2 == 0:
        sum+=n2 
    n1,n2 = n2,n1+n2
print(sum)


##output:
4613732
