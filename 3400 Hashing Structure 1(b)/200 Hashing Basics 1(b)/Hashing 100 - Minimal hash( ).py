
# 환경변수에서 PYTHONHASHSEED를 지정해야 한다.
# 안그러면 할 때마다 hash( )값이 그때 그때 변함.


My=list("banana tree")
for w in My :
    print(f'w= "{w}", hash={hash(w)%10000000:9}')


# 그러나 수행할 때마다 이 값을 달라진다.