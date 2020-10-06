**Link to Problem:** https://www.hackerrank.com/challenges/service-lane/problem

**Description:**
Calvin is driving his favorite vehicle on the 101 freeway. He notices that the check engine light of his vehicle is on, and he wants to service it immediately to avoid any risks. Luckily, a service lane runs parallel to the highway. The service lane varies in width along its length.

<img src="https://hr-testcases.s3.amazonaws.com/1331">

You will be given an array of widths at points along the road (indices), then a list of the indices of entry and exit points. Considering each entry and exit point pair, calculate the maximum size vehicle that can travel that segment of the service lane safely.

For example, there are `n = 4` measurements yielding `width = [2, 3, 2, 1]`. If our entry index, `i = 1` and our exit, `j = 2`, there are two segment widths of `2` and `3` respectively. The widest vehicle that can fit through both is `2`. If `i = 2` and `j = 4`, our widths are `[3, 2, 1]` which limits vehicle width to `1`.

**Input Format:**

The first line of input contains two integers, `n` and `t`, where `n` denotes the number of width measurements you will receive and `t` the number of test cases. The next line has `n` space-separated integers which represent the array width[w<sub>0</sub>, w<sub>1</sub>..., w<sub>n-1</sub>].

The next `t` lines contain two integers, `i` and `j`, where `i` is the start index and `j` is the end index of the segment being considered.

**Constraints:**

- `2 ≤ n ≤ 100000`
- `1 ≤ t ≤ 1000`
- `0 ≤ i < j < n`
- `2 ≤ j - i + 1 ≤ min(n, 1000)`
- `1 ≤ width[k] ≤ 3, where 0 ≤ k < n`

**Output Format:**

For each test case, print the number that represents the largest vehicle type that can pass through the entire segment of the service lane between indexes `i` and `j` inclusive.

**Sample Input:**

> 8 5

> 2 3 1 2 3 2 3 3

> 0 3

> 4 6

> 6 7

> 3 5

> 0 7

**Sample Output:**

> 1

> 2

> 3

> 2

> 1

**Explanation:**

Below is the representation of the lane:

>&nbsp;&nbsp;&nbsp;&nbsp;|HIGHWAY|Lane|&nbsp;&nbsp;&nbsp;&nbsp;->&nbsp;&nbsp;&nbsp;&nbsp;Width

> 0: |&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|--|&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;2

> 1: |&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|---|&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;3

> 2: |&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|-|&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;1

> 3: |&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|--|&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;2

> 4: |&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|---|&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;3

> 5: |&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|--|&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;2

> 6: |&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|---|&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;3

> 7: |&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|---|&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;3

`1. (0,3):` From index `0` through `3` we have widths `2, 3, 1` and `2`. Nothing wider than `1` can pass all segments.

`2. (4,6):` From index `4` through `6` we have width `3, 2` and `3`. Nothing wider than `2` can pass all segments.

`3. (6,7):` `3, 3 → 3`

`4. (3,5):` `2, 3, 2 → 2`

`5. (0, 7):` `2, 3, 1, 2, 3, 2, 3, 3 → 1`





