

def organizingContainers(container):
    rows = [sum(x) for x in container]
    cols = [sum(y) for y in zip(*container)]
    rows, cols = sorted(rows), sorted(cols)
    if(all(x == y for x, y in zip(rows, cols))):
        return "Possible"
    else:
        return "Impossible"


if __name__ == '__main__':

    q = int(input())

    for q_itr in range(q):
        n = int(input())

        container = []

        for _ in range(n):
            container.append(list(map(int, input().rstrip().split())))

        result = organizingContainers(container)

        print(result)
