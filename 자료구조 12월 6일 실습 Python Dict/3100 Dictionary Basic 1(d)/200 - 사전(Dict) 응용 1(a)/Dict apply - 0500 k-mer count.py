
dnadict = { }  # 빈 사전을 만듬
dna = "agttgataatggcgcgcgcgcgctaagagtgatgctag"

this= dna[0:4]

for x in range( len(dna)-3 ):
    word = dna[x:x+4]
    if word in dnadict :
        dnadict[ word ] += 1
    else :
        dnadict[ word ]  = 1



print("최종적으로 만들어진 사전 \n", dnadict)