def addmore( S ):
    return S * 1.5


salary = [100, 200, 220, 300, 400, 500, 600, 700, 1000 ]
lmap  =  map( addmore, salary )

print( next( lmap ) )  # 필요할때만 하나씩 꺼냄
print( next( lmap ) )
print( next( lmap ) )
print( next( lmap ) )


for w in lmap :
    print("w=", w)

