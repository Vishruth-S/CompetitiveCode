# Sample Input 0

# 6 6 4
# Sample Output 0

# 4


def main():
    t=1
    for i in range(t):
        i=raw_input().split()
        n=int(i[0])
        m=int(i[1])
        a=int(i[2])
        st=0
        if n%a==0:
            nst=n/a
        else:
            nst=int(n/a)+1
        if m%a==0:
            mst=m/a
        else:
            mst=int(m/a)+1
        st=nst*mst
        print st
main()