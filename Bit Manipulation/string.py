mystring = 'TTTACACAGCTGCTGGGCCCAGTTTTGGG'

mydict = { "TTT":"P",
         "GGG":"GU",
         "AAA":"AAA",
         "CCC":"CA"}

mydict1= {}
'''
#splitting the string at 3
print([test[i:i+3] for i in range(0, len(test), 3)])
'''

for key in mydict:
    if key in mystring:
        #print("\n")
        #mydict[key] = mystring.count(key)
        mydict1[key] = mystring.count(key)
        #print(mydict[key])
        #print(mystring.count(key))
        #print(mydict[key],':',mystring.count(key))
print(mydict1.items())
