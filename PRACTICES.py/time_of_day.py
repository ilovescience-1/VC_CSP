# VC time of day practice

time = int(input("what is the hour time in military?"))
if time <= 0:
    print("Good Morning!")
elif time <= 1200:
    print("Good afternoon!")
elif time <= 1700:
    print("Good evening!")
