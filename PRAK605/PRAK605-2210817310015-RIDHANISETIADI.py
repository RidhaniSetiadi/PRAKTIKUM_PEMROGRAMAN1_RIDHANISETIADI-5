x = int(input())
MatriksA = []
print("Matriks A")
for i in range(x):
    k = list(map(int,input().split()))
    MatriksA.append(k)
MatriksB = []
print("Matriks B")
for i in range(x):
    k = list(map(int,input().split()))
    MatriksB.append(k)
MatriksAB = []
print("\nMatriks AXB")
for i in range(x):
    MatriksAB.append([])
    for j in range(x):
        a=0
        for k in range(x):
            a=a+MatriksA[i][k]* MatriksB[k][j]
        MatriksAB[i].append(a)
for baris in MatriksAB :
    for k in baris :
        print(k, end=' ')
    print()
