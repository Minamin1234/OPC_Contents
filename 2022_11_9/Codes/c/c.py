n = int(input())
cin = input().split()
mx = int(cin[0])
for i in range(1,n):
    a = int(cin[i])
    if mx < a:
        mx = a

print(mx)
