def ChkPrime(Num):
    count = 0
    for i in range(1, Num+1):
        if Num%i == 0:
            count = count + 1

    if count > 2 or count < 2:
        return 0
    else:
        return Num
        