string=str(input())
 
if string!=string[::-1]:
    print(len(string))
    
elif len(set(string))==1:
    print("0")
    
elif string==string[::-1]:
    
    print(len(string)-1)
