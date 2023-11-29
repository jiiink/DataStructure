import math

def gcd(a, b):
    while b:
        a, b = b, a % b
    return a

def reduce_fraction(num, den):
    common = gcd(num, den)
    return num // common, den // common

def parse_extended_fraction(tokens):
    if not tokens:
        return -1

    token = tokens.pop(0)
    if token == '(':
        result = parse_extended_fraction(tokens)
        if result == -1:
            return -1

        num1, den1 = result

        token = tokens.pop(0)
        if not token.isdigit():
            return -1
        a = int(token)

        token = tokens.pop(0)
        if not token.isdigit():
            return -1
        b = int(token)

        token = tokens.pop(0)
        if token != ')':
            return -1

        result = parse_extended_fraction(tokens)
        if result == -1:
            return -1

        num2, den2 = result

        num = a * den1 + b
        den = den1

        num += num2 * den
        den *= den2

        return num, den

    elif token.isdigit():
        a = int(token)

        token = tokens.pop(0)
        if token.isdigit():
            # If there are more tokens, treat it as a standalone integer
            b = int(token)
        else:
            # If no more tokens, treat it as a fraction with denominator 1
            b = a

        token = tokens.pop(0)
        if token != ')':
            return -1

        return a, b

    else:
        return -1

def main():
    n = int(input())
    symbols = input().split()

    num, den = parse_extended_fraction(symbols.copy())

    if num == -1:
        print(-1)
    else:
        num, den = reduce_fraction(num, den)
        print(num, den)

if __name__ == "__main__":
    main()
