
spanish ={ 0:"cero",
           1:"uno",   2:"dos",   3:"tres",   4:"cuatro",  5:"conco", \
           6:"seis",  7:"siete", 8:"ocho",   9:"nueve",  10:"diez"}


def transespania( pstr ) :
    sp=""
    for w in list(pstr) :
        sp += spanish[ int(w)]+"-"

    return(sp)


print( list( spanish.keys() ))
print( list( spanish.values() ) )

phone="5102283"
print( f'전화번호= {phone} \n')

print( f'스페인 발음 \n {transespania(phone)}' )



