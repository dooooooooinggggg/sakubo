def isSosu(seisu):
    for i in range(2, seisu-1):
        if(seisu % i == 0):
            print(i)
            print(seisu//i)
            return False

    return True


seisu = 25313
if isSosu(seisu):
    print("sosu")
else:
    print("not sosu")
