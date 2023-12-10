# 국제행사에 외국이이 온다.
# 이들을 대형 리조트에 분산배치하려고 한다.
# 이 리조트는 5개로 구성되어 있으며 각각의 이름은
# 해운대, 송정, 광안리, 다대포, 송도 이다.

import numpy as np


def Dnum(name):
    if "A" <  name <= "E" : return("해운대")
    if "E" <  name <= "H" : return("송정")
    if "H" <  name <= "L" : return("광안리")
    if "L" <  name <= "S" : return("다대포")
    if "S" <  name <= "Z" : return("송도")
    return(10)



Name=[ "Chalres", "Fred", "Romio", "Perucio", "Olivia",
       "Kelly", "James", "Soliinma", "Unganda", "Kolinder",
       "Mechs", "Carlly", "Desmond", "Delipoi", "Sunny",
       "Effiles", "Adele", "Eppiw", "Montity", "Yamajaki",
       "Kim_Don", "Goodrich", "Buxy", "Scarlipio", "Terminia",
       "Ceruly", "Victoria", "Ottiz", "Sestivia", "Burnside",
]


Desk={}

for this in Name :
    Cnum =  Dnum(this)
    if Cnum not in Desk :
        Desk[ Cnum ] = []
        Desk[ Cnum ].append( this )
    else :
        Desk[ Cnum ].append( this )

for w in Desk :
    print(f"\n Desk[{w}] =")
    for Lname in Desk[w] :
        print(f"           Guest = {Lname}" )