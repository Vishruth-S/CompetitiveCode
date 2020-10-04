n = int(input())
alp = []
a = []
p = []
for i in range(0, 26):
    alp.append(chr(65+i))
while True:
    try:
        a.append(input())
        b = list(input().split(" "))
        p.append(b)
    except (EOFError):
        break
for i in range(0, len(a)):
    h = list()
    for j in p[i]:
        for x in j:
            h.append(x)
    c = list()
    for j in a[i]:
        if j not in c:
            c.append(j)
    e = list()
    for j in alp:
        if j not in c:
            e.append(j)
    d = dict()
    for j in c:
        d[j] = list()
    k = 0
    for j in d.keys():
        t = k
        while t < 26 and t+len(c) < 26:
            d[j].append(e[t])
            t += len(c)
        k += 1
    d = sorted(d.items())
    f = list()
    for j in d:
        f.append(j[0])
        for x in j[1]:
            f.append(x)
    final = ''
    for j in range(0, len(h)):
        t = f.index(h[j])
        if j%5 == 0 and j != 0:
            final += ' '
        final += alp[t]
    print(final)
