
import sys

def birthdayCakeCandles(n, ar):
    m = max(ar)
    res = [i for i, j in enumerate(ar) if j == m]
    res1 = len(res)
    return res1
n = int(raw_input().strip())
ar = map(int, raw_input().strip().split(' '))
result = birthdayCakeCandles(n, ar)
print(result)