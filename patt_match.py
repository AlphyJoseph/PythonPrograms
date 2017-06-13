import sys
import re
def patternCount(s):
    matchObj = re.findall( r'1(0+)1', s)
    count = len(matchObj)
    return count
        

q = int(raw_input().strip())
for a0 in xrange(q):
    s = raw_input().strip()
    result = patternCount(s)
    print(result)
