def paralel_drawer(short, long):
    space_number = short - 1
    for i in range(short):
        for j in range(space_number):
            print("  ", end="")
        if i == 0 or i == short - 1:
            for j in range(long):
                print("* ", end="")
        else:
            for j in range(long):
                if j == 0 or j == long - 1:
                    print("* ", end="")
                else:
                    print("  ", end="")
        print("")
        space_number -= 1

kisa = int(input("Lutfen kisa kenar uzunlugunu giriniz :"))
uzun = int(input("Lutfen uzun kenar uzunlugunu giriniz :"))

paralel_drawer(kisa, uzun)
