#


def DCTrees(arr):
    arr = list(set(arr))
    if arr.count(0) != 0:
        arr.remove(0)

    return len(arr)


if __name__ == '__main__':
    for _ in range(int(input())):
        q = int(input())
        Arr = list(map(int, input().strip().split()))

        print(DCTrees(Arr))
