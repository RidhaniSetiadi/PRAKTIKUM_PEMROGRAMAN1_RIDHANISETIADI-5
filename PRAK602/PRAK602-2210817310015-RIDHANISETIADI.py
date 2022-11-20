kolom = int(input())
angka = list(map (int, input().split()))
matriks = []
x = 0
for i in range(0, kolom) :
    matriks.append(angka[x : x + kolom])
for i in range(0, kolom) :
    print(matriks[0][i] * (i + 1),end=" ")