import random

#random key generation
key = random.randint(0,9)
bin_key = '0'*(8-len(bin(key)[2:])) + bin(key)[2:]

inp = input("Enter the text to encrypt :")
newval = list(inp)
length = len (newval)
nList = []

for i in newval:
    newchar = ord(i) + key
    binary = '0'*(8-len(bin(newchar)[2:])) + bin(newchar)[2:]
    nList.append(binary)
    
print("The encrypted code is :",bin_key+''.join(nList))
a = 1
while (a == 1):
    
    pw = input("Enter password to decrypt :")
    #please add your key to decrypt
    if (pw == "ENTER_UR_Password_Here"):
            i = 0
            deList = []
            tot = len(nList)
            while (tot > i ):
                x = nList[i]
                xx = int(x,2)
                xxx = xx - key
                deList.append(chr(xxx))
                i = i + 1
            print('Decryped value :'+''.join(deList))
            a = 2
    else:
            print("Invalid password !")
            a = 1
