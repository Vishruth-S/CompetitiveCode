def subUnsort(A):
        b=sorted(A)
        L=[]
        if b==A:
            return [-1]
        else:
            for i in range(len(A)):
                if A[i]!=b[i]:
                    L.append(i)
            return [min(L),max(L)]

if __name__ == "__main__":
    A=[1,3,2,4,5]
    B=[1,2,3,4,5]
    print(A," -> ",subUnsort(A))
    print(B," -> ",subUnsort(B))
