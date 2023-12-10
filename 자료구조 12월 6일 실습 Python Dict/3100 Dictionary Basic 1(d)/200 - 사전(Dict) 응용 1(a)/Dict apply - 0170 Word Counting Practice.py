
"""
소설 <카라마조프의 형제들> 단어 분석하기

"""
import re


myfile = open("kara_small.txt", "r")

i=1
for line in myfile :
    line = line.split()
    print("\n i=", i, ": " , end=" ")

    for word in line :
        # 단어에서 영문자만 선택, 각종 기호는 삭제함
        w1 = " ".join(re.findall("[a-zA-Z]+", word))
        w2 = w1.lower()  # 소문자로 통일시킴
        print( w2, end=" ")
    i += 1



myfile.close()
