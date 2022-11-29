import sys
import secrets
import string

#calculates sum of command line arguments
setcharacters = string.ascii_letters + string.digits
a = []
for argv in sys.argv[1:]:
    try:
        a.append(int(argv))
    except ValueError:
        break
maxlength = sum(a)
#if value of a is bogus. Program will switch default length to be 8.
if maxlength <= 0:
    pwd = ''.join(secrets.choice(setcharacters)
            for i in range(8))
    print("Generated password: " + str(pwd))
elif maxlength != int(maxlength):
    pwd = ''.join(secrets.choice(setcharacters)
            for i in range(8))
    print("Generated password: " + str(pwd))
else:
    pwd = ''.join(secrets.choice(setcharacters)
            for i in range(maxlength))
    print("Generated password: " + str(pwd))
