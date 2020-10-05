n = int(input())    #number of test cases
alp = []    #list of alphabets A-Z
a = []  #list of keywords
p = []  #list of words of ciphertext
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
    #divide the words of ciphertext into list of letters
    for j in p[i]:
        for x in j:
            h.append(x)
    c = list()
    #remove duplicate letters from keyword
    for j in a[i]:
        if j not in c:
            c.append(j)
    e = list()
    #list of alphabets skipping letters in the keyword
    for j in alp:
        if j not in c:
            e.append(j)
    d = dict()
    #creating a dictionary with keyword letters as keys and empty lists as values
    for j in c:
        d[j] = list()
    k = 0
    #adding the alphabets to the dictionary as they'd appear in the matrix with the keyword
    for j in d.keys():
        t = k
        while t < 26 and t+len(c) < 26:
            d[j].append(e[t])
            t += len(c)
        k += 1
    #sorting the items in dictionary to get sorted keys
    d = sorted(d.items())
    f = list()
    #creating substitution text with the sorted keyword letters and its corresponding list in dictionary
    for j in d:
        f.append(j[0])
        for x in j[1]:
            f.append(x)
    final = ''
    for j in range(0, len(h)):
        t = f.index(h[j])
        if j%5 == 0 and j != 0:
            final += ' '
        final += alp[t]  #final ciphered message
    print(final)
