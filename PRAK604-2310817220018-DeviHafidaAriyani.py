simbol = input()
pesan = input()

bintang = 0
pagar = 0

if len(simbol) != len(pesan):
    print("Panjang kalimat berbeda, pesan palsu")
else:
    for i in range(len(simbol)):
        if simbol[i] == pesan[i]:
            print('*', end='' if simbol[i] == ' ' else ' ')
            bintang += 1 if simbol[i] != ' ' else 0
        else:
            print('#', end='')
            pagar += 1

    print("\n* =", bintang)
    print("# =", pagar)
    print("Pesan Asli" if bintang >= pagar else "Pesan Palsu")