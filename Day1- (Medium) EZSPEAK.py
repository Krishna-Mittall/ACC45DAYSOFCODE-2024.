T = int(input())

lst = ['a','e','i','o','u']

for i in range(1,T+1):
    N = int(input())
    S = input()
    n = 0
    hard = False
    
    for j in S:
        if j not in lst:
            n +=1 
            if n >=4:
                print("NO")
                hard = True
                break
        else:
            n = 0
    if not hard:
        print("YES")

