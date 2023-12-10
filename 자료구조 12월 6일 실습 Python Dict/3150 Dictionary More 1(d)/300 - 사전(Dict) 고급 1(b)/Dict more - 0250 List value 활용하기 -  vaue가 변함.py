import numpy as np


def Dnum(name):
    if "A" <  name <= "E" : return(1)
    if "E" <  name <= "H" : return(5)
    if "H" <  name <= "L" : return(2)
    if "L" <  name <= "S" : return(3)
    if "S" <  name <= "Z" : return(4)
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
    print(f" Desk[{w}] = {Desk[w]}")