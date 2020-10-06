# Logic
# Create a frequency list for all alphabets,
# next compare the frequency of all alphabets from b to z with
# frquency of a, iteratively. If the frequencies don't match
# subtract the a's frequency from the current letter's frequency.
# Compare the frequency of the letter with a's frequency again, if they
# don't yet match increment diff_freqs. At the end of loop, if there's more
# than one letter with different frequnecy than a's, diff_freqs will
# be more than 1 and the string will be invalid!


def isValid(s):
    freq = [0] * 26
    for i in s:
        freq[ord(i) - ord('a')] += 1
    diff_freqs = 0
    for i in range(1, 26):
        if freq[i] != 0:
            freq[i] -= freq[0]
            if freq[i] != 0:
                diff_freqs += 1
    return "YES" if diff_freqs <= 1 else "NO"
