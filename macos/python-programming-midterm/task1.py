import random
nouns = ["leader", "teacher", "athlete", "artist", "entrepreneur", "scientist",
         "writer", "doctor", "parent", "friend"]

adjectives = ['kindest', 'nicest', 'smartest', 'wisest', 'funniest', 'bravest',
              'happiest', 'friendliest', 'prettiest', 'strongest']

adjective = adjectives[random.randint(0, 9)]  # generate adjective
noun = nouns[random.randint(0, 9)]  # generate noun
print("You are the", adjective, noun)
