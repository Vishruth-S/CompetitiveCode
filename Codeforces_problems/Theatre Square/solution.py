# Sample Input 0
# 6 6 4

# Sample Output 0
# 4


def main():
    t=1
    for i in range(t):
        i=raw_input().split()
        n=int(i[0]) # length of the plot
        m=int(i[1]) # width of the plot
        a=int(i[2]) # size of the block that are used to create plot
        st=0
        
        # find out out many complete blocks can be fit in the plot
        if n%a==0:
            nst=n/a
        else:
            nst=int(n/a)+1

        # then find out how many blocks can be added to the remaining area of the plot (it is fine if blocks are using more area than required, as given in the question)
        if m%a==0:
            mst=m/a
        else:
            mst=int(m/a)+1
        st=nst*mst
        print st
main()