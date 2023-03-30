

# import numpy as np

# import matplotlib.pyplot as plt

# # adjust coordinates

# x = y = [i for i in range(0, 6)]

# # depict illustration

# fig = plt.figure()

# ax = fig.add_subplot()

# plt.plot(x, y)

# # square plot

# ax.set_aspect('equal', adjustable='box')

# plt.show()


import matplotlib.pyplot as plt

a = [0,5,5,0,0]

b = [0,0,5,5,0]

plt.plot(a,b,'.-.')

c = [1,4,4,1,1]
d = [1,1,4,4,1]

plt.plot(c,d,'r.-.')

plt.axis('equal')

plt.show()
