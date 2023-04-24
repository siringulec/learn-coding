with open("musician.txt", "r") as input, open("output.txt", "a") as output:

    # read and remove \n from end of each string and write into a list
    # remove any empty string to avoid any empty lines
    # that may be at the end of the musician file
    file = list(filter(None, [line.rstrip() for line in input.readlines()]))

    # This loop starts from 0 to the length of the file and increments by 3
    # combines 3 lines to one line where the third element in parentheses
    # then writes into another file named result
    for x in range(0, int(len(file)), 3):
        musician = file[x] + " " + file[x+1] + " (" + file[x+2] + ")"
        print(musician)
        output.write(musician + '\n')
