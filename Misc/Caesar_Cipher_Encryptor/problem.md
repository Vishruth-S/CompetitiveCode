# Caesar Cipher Encryptor
## Problem
Given a non-empty string of lowercase letters and a non-negative integer representing a key, write a function that returns a new string obtained by shifting every letter in the input string by k positions in the alphabet, where k is the key.

Note that letters should "wrap" around the alphabet; in other words, the letter 'z' shifted by one returns the letter 'a'.

## Input
A string consisting of the message in lowercase letters. 
A key by which the letter have to be shifted

## Output
A string consisting of encrypted message.

## Example
- ```caesarCipherEncryptor("xyz", 2)```, returns "zab"
- ```caesarCipherEncryptor("cat", 5)```, returns "hfy"