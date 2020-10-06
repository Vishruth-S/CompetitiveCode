# # PROBLEM STATEMENT
# link to the problem => https://codeforces.com/contest/716/problem/A
ZS the Coder is coding on a crazy computer. If you don't type in a word for a c consecutive seconds, everything you typed disappear!

More formally, if you typed a word at second a and then the next word at second b, then if b - a ≤ c, just the new word is appended to other words on the screen. If b - a > c, then everything on the screen disappears and after that the word you have typed appears on the screen.

For example, if c = 5 and you typed words at seconds 1, 3, 8, 14, 19, 20 then at the second 8 there will be 3 words on the screen. After that, everything disappears at the second 13 because nothing was typed. At the seconds 14 and 19 another two words are typed, and finally, at the second 20, one more word is typed, and a total of 3 words remain on the screen.

You're given the times when ZS the Coder typed the words. Determine how many words remain on the screen after he finished typing everything.
