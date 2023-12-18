n = 9
a = 5
i = 1
while i <=9:
    j = 1  # print pattern a 
    while j<=9:
        if i>=a and ( j==1 or i==a or j==n ) or ( j<=a and (i+j == a+1) or j>=a and j-i == a-1):
            print("*",end = "")
        else :
            print(" ",end = "")
        j+=1

    j = 1 # print M letter  
    print("   ",end = "")
    while j<=9:
        if j ==1 or j==n or (i<=a and (i==j or i+j == n+1)):
            print("*",end = "")
        else :
            print(" ",end = "")
        j+=1

    j = 1 # Print I letter 
    print("   ",end = "")
    while j<=9:
        if i== 1 or i==n or j==a:
            print("*",end = "")
        else :
            print(" ",end = "")
        j+=1

    j = 1  # print T letter 
    print("  ",end = "")
    while j<=9:
        if i==1 or j==a:
            print("*",end = "")
        else :
            print(" ",end = "")
        j+=1

    print("")
    i+=1
