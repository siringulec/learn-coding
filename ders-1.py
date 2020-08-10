def squre_drawer(length):
    for satir in range(length):
        for sutun in range(length):
            if satir == 0:
                print("S", end=" ")
            elif satir == (length - 1):
                print("S", end=" ")
            else:
                if sutun == 0:
                    print("S", end=" ")
                elif sutun == (length -1):
                    print("S", end=" ")
                else:
                    print(" ", end=" ")


        print("")


leng = int(input("Lutfen cizilecek karenin kenar uzunlugunu giriniz :"))
squre_drawer(leng)
