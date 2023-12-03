
# Create a global variable `A`.
A = 5

def impure_sum(b):
    # Adds two numbers, but uses the
    # global `A` variable.
    return b + A

def pure_sum(a, b):
    # Adds two numbers, using
    # ONLY the local function inputs.
    return a + b

print("impure_sum(6)=", impure_sum(6))


print("pure_sum(6)=", pure_sum(4, 6))
