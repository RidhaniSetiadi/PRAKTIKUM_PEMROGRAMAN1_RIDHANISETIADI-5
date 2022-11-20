kolom,baris = map(int, input().split())
angka = list(map (int, input().split()))
matriks = []
a = 0
for i in range(kolom) :
    matriks.append(angka[a : a + baris])
    a = a + baris
for kolom in matriks :
    for angka in kolom :
        print(angka, end =' ')
    print()
    
