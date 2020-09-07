def triangle_drawer(length):
    space = length - 1
    start = 1
    for i in range(length):
        for j in range(space):
            print(" ", end="")
        for j in range (start):
            print("*", end="")
        space = space - 1
        start += 2
        print("")



def rectangle_drawer(short, long):
    for i in range(short):
        for j in range(long):
            print("* ", end="")

        print("")


# kisa = int(input("kısa kenar uzunluğunu giriniz:"))
# uzun = int(input("uzun kenar uzunluğunu giriniz:"))

# rectangle_drawer(kisa, uzun)
uzunluk = int(input("uzunluk giriniz:"))
triangle_drawer(uzunluk)
