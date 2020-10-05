**Link to the Problem:** https://www.hackerrank.com/challenges/designer-pdf-viewer/problem

**Description:**

When a contiguous block of text is selected in a PDF viewer, the selection is highlighted with a blue rectangle. In this PDF viewer, each word is highlighted independently. For example:

<a>![Foo](https://s3.amazonaws.com/hr-challenge-images/22869/1471640108-6c01750b16-PDF-highighting.png)</a>

There is a list of **`26`** character heights aligned by index to their letters. For example, 'a' is at index `0` and 'z' is at index `25`. There will also be a string. Using the letter heights given, determine the area of the rectangle highlight in **`mm²`** assuming all letters are **`1mm`** wide.

**Example:**

**`h = [1, 3, 1, 3, 1, 4, 1, 3, 2, 5, 5, 5, 5, 1, 1, 5, 5, 1, 5, 2, 5, 5, 5, 5, 5, 5] word = 'torn'`**

The heights are **`t = 2, o = 1, r = 1`** and  **`n = 1`**. The tallest letter is **`2`** high and there are **`4`** letters. The hightlighted area will be **`2 * 4 = 8mm²`** so the answer is **`8`**.

**Input Format:**

The first line contains **`26`** space-separated integers describing the respective heights of each consecutive lowercase English letter, ascii[a-z].
The second line contains a single word consisting of lowercase English alphabetic letters.

**Constraints:**

- **`1 ≤ h[?] ≤ 7`**, where **`?`** is an English lowercase letter.
- **`word`** contains no more than  letters.

**Sample Input 0:**

> 1 3 1 3 1 4 1 3 2 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5

> abc

**Sample Output 0:**

> 9

**Explanation 0:**

We are highlighting the word abc:

Letter heights are **`a = 1`**, **`b = 3`** and **`c = 1`**. The tallest letter, b, is **`3mm`** high. The selection area for this word is **`3 * 1mm * 3mm = 9mm²`**.

**Note:** Recall that the width of each character is **`1mm`**.

**Sample Input 1:**

> 1 3 1 3 1 4 1 3 2 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 7

> zaba

**Sample Output 1:**

> 28

**Explanation 1:**

We are highlighting the word abc:

The tallest letter in **`zaba`** is **`z`** at **`7mm`** high. The selection area for this word is **`4 * 1mm * 7mm = 28mm²`**.
