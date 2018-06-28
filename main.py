n= 150
cpy=n
leastdigit=''
while(cpy!=0):
    digit = cpy%10
    if(digit == 0):
        leastdigit =   '0'+leastdigit
    else:
        leastdigit = '1'+leastdigit

    cpy = cpy/10
print(leastdigit)
    
