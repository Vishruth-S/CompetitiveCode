def isValid(s):
    freq = [0] * 26
    # create frequency list of all letters
    for i in s:
        freq[ord(i) - ord('a')] += 1
    diff_freqs = 0
    for i in range(1, 26):
        if freq[i] != 0:
            freq[i] -= freq[0]
            if freq[i] != 0:
                diff_freqs += 1
    return "YES" if diff_freqs <= 1 else "NO"