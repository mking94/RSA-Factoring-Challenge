liste = ["239809320265259",
"1718944270642558716715"]
def factoring(liste, start, end):
    while(start < end):
        temp = int(liste[start])
        j = 2
        k = int(temp/4)
        while(j < int(temp/4)and(temp % k != 0)and(temp % j != 0)):
            j += 1
            k += 1
        print("k=",k)
        print("j=",j)
        start += 1
factoring(liste,0,len(liste)) 
