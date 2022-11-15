n = int(input())
cin = input().split()
A = []
for i in range(n):
    a = int(cin[i])
    A.append(a)
A.sort()
A.reverse()
print(A[2])