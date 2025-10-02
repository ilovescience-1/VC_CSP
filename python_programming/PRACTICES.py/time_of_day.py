# VC time of day practice

time = int(input("what is the hour time in military?"))
if time <= 0:
    print("Good Morning!")
elif time <= 12:
    print("Good afternoon!")
elif time <= 21:
    print("Good evening!")