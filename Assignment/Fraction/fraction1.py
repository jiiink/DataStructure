import math

def gcd(a, b):
    while b:
        a, b = b, a % b
    return a

def reduce_fraction(num, den):
    common = gcd(num, den)
    return num // common, den // common

def parse_extended_fraction(tokens):
    while len(tokens) != 0:
        print("tokens", tokens)
        # if not tokens:
        #     return -1

        token = tokens.pop(0)
        if token == '(':
            result = parse_extended_fraction(tokens)
            # if result == -1:
            #     return -1

            a, mom = result
            if len(tokens) != 0:
                token = tokens.pop(0)
                
                if token.isdigit():
                # If there are more tokens, treat it as a standalone integer
                    b = int(token)
                elif token == '(':
                # If no more tokens, treat it as a fraction with denominator 1
                # b = a
                    value, mom = parse_extended_fraction(tokens)
                # return (a*value + b)/value, value*mom

                token = tokens.pop(0)
            # if token != ')':
            #     return -1
                if token == '(':
                # c = int(token)
                    value, mom = parse_extended_fraction(tokens)
                elif token.isdigit():
                    c = int(token)
                
                token = tokens.pop(0)
                return (a*c + b)/c, c*mom
            # token = tokens.pop(0)
            # if not token.isdigit():
            #     return -1
            # a = int(token)

            # token = tokens.pop(0)
            # if not token.isdigit():
            #     return -1
            # b = int(token)

            # token = tokens.pop(0)
            # if token != ')':
            #     return -1

            # result = parse_extended_fraction(tokens)
            # if result == -1:
            #     return -1

            # num2, den2 = result

            # num = a * den1 + b
            # den = den1

            # num += num2 * den
            # den *= den2

            return num, den

        elif token.isdigit():
            a = int(token)

            token = tokens.pop(0)
            if token.isdigit():
                # If there are more tokens, treat it as a standalone integer
                b = int(token)
            elif token == '(':
                # If no more tokens, treat it as a fraction with denominator 1
                # b = a
                value, mom = parse_extended_fraction(tokens)
                return (a*value + b)/value, value*mom

            token = tokens.pop(0)
            # if token != ')':
            #     return -1
            if token == '(':
                # c = int(token)
                value, mom = parse_extended_fraction(tokens)
            elif token.isdigit():
                c = int(token)
                
            token = tokens.pop(0)
            
            return (a*c + b)/c, c

        else:
            return -1

def main():
    n = int(input())
    symbols = input().split()
    
    # for symbol in symbols:
    #     if symbol == '(':
    token = symbols.pop(0)
    print(symbols)
    if token == '(':
        num, den = parse_extended_fraction(symbols)
    else:
        print(-1)
    # num, den = parse_extended_fraction(symbols.copy())
    print(int(num*den), den)
    # if num == -1:
    #     print(-1)
    # else:
    #     num, den = reduce_fraction(num, den)
    #     print(num, den)

if __name__ == "__main__":
    main()
