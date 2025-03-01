#!/usr/bin/env python3

def genapplyspec(n):
    ans = f'#define APPL{n}(m, ' + ', '.join(f'a{i + 1}' for i in range(n)) + ')'
    #if n > 1: ans += f' APPL{n - 1}(m, ' + ', '.join(f'a{i + 1}' for i in range(n - 1)) + ')'
    #ans += f' m(a{n})'
    ans += ''.join(f' m(a{i + 1})' for i in range(n))
    return ans

def genget(n):
    ans = f'#define GET{n}(' + ', '.join(f'a{i + 1}' for i in range(n + 1)) + f', ...) a{n + 1}'
    return ans

def genapply(n):
    ans = '\n'.join(genapplyspec(i) for i in range(1, n + 1))
    ans += '\n' + genget(n)
    ans += f'\n#define APPLY(m, a...) GET{n}(a, ' + ', '.join(f'APPL{i}' for i in range(n, -1, -1)) + ')(m, a)'
    return ans

print(genapply(25))
