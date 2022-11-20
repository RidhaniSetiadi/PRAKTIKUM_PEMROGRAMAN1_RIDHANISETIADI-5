baris1, baris2 = map(int,input().split())
if baris1 != baris2 :
    print("Jumlah tidak sama")
else :
    angka1 = list(map(int, input().split()))
    angka2 = list(map(int, input().split()))
    matriks1 = []
    matriks2 = []
    a = 0
    matriks1.append(angka1[a : a + baris1])
    matriks2.append(angka2[a : a + baris2])
    for i in range(0, baris1) :
        print(matriks1[0][i] * matriks2[0][i],end=" ")
