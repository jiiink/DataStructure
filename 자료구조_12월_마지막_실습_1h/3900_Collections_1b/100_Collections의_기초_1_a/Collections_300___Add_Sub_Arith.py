#-------------------------------------------------------------------------------
# Author:      Zoh
# Created:     2020-05-02
#-------------------------------------------------------------------------------



from collections import Counter

Ca = Counter( list("computer"))
Cb = Counter( list("complexity"))
print(Ca)
print(Cb)

Cab = Ca + Cb
print("Cab=", Cab)

Caminusb = Ca - Cb
print("Caminusb=", Caminusb)

print("Ca and Cb = ", Ca&Cb)
print("Ca or Cb = ", Ca|Cb)