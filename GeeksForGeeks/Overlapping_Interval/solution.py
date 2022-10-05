class Solution:
    def mergeInterval(self, L, R):
        return [min(L + R), max(L + R)]

    def overlappedInterval(self, Intervals):
        Intervals.sort()
        result = [Intervals[0]]

        for i in range(1, len(Intervals)):
            if result[-1][1] >= Intervals[i][0]:
                tmp = self.mergeInterval(result[-1], Intervals[i])
                result.pop()
                result.append(tmp)
            else:
                result.append(Intervals[i])

        return result



if __name__ == '__main__':
    Intervals = [[6, 8], [1, 9], [2, 4], [4, 7]]
    n = len(Intervals)
    obj = Solution()
    ans = obj.overlappedInterval(Intervals)
    for i in ans:
        for j in i:
            print(j, end=" ")
    print()

