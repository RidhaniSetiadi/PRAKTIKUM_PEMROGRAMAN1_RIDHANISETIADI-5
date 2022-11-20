x=0;y=0
asli = input();palsu = input()
kode = len(asli);pesan = len(palsu)
if kode != pesan:
    print("Panjang kalimat berbeda, pesan palsu")
else:
    for a in range(kode):
        if((asli)[a] == palsu[a]):
            if(asli[a]== ' '):
                print(" ",end=' ')
            else:
                print("*",end=' ')
                x += 1
        else:
            print("#", end='')
            y += 1
    print("\n* = ",x)
    print("# = ",y)
    if(x >= y):
        print("pesan Asli")
    else:
        print("pesan palsu")
