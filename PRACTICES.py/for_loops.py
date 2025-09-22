# VC loops time

import datetime

current = datetime.datetime.now()
hour = current.hour

#print(f"The time in seconds since Jan 1, 1970)
print(f"The time is: {current}")
print(f"The hour is: {hour}")

# Lists
# They can always have any information as long as they are seprerated
siblings = ["Mateo", "Valeria", "Violett", "Milan", "Victoria"]

print(siblings[4])
print(siblings)
siblings[0]= "Mateo"
siblings[2] = "Violett"
siblings.remove("Victoria")

#for loop
for sibling in siblings:
    #print(f"Hello {sibling}")
    print("Hi")

for x in range(20,-11, -1):
    print(x)

#while Loops
#infinite Loops
#while True:
#    print("Oh NO!")

# Good While loop
i = 1

while i < 21:
    if i % 2 == 0:
        print(f"{i} is even")
    else:
        print(f"{i} is odd")
    i += 1

    import random

    number = random.randint(1,20)
    x = 1 
"""while x != number:
        print("Duck")
        x +=1

    print("Goose!")"""

while True:
    if number == x:
        print("Goose!")
        break
    else:
        print("Duck")
        x += 1