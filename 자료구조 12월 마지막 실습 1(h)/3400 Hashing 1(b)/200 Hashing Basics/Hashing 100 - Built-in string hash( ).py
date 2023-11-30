
My=list("PNUcomputerdept")
for w in My :
    print(f'w= "{w}", hash={hash(w)%10000000:9}')


# 그러나 수행할 때마다 이 값을 달라진다.