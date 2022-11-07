def reverse(reverse):
    n = 0
    while(reverse !=0):
        n = n * 10
        n = n + reverse % 10
        reverse //= 10
    return n
A, B = input().split()
A = reverse(int(A))
B = reverse(int(B))
C = A + B
print(reverse(C))