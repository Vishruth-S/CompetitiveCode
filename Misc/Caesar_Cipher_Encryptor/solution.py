'''
The idea is to encrpyt the input message by shifting the
input string by a key value. Do keep in mind that the process
is cyclic i.e 'z' shifted by 1 will be 'a'.
'''

def caesarCipherEncryptor(string, key):
    # Storing the Ascii value of 'a' in minChar i.e 97
    minChar = ord('a')
    # Storing the Ascii value of 'z' along with i.e 122
    # extra +1 to be able to perform modulo operations
    maxChar = ord('z') + 1
    # Initializing empty string
    newString = ''
    # Check to see if key is less than 26.
    # If not scale it down between 0 - 26.
    key = key % (maxChar - minChar)
    # Traversing each character in input string
    for letter in string:
        # Each character shifted by key value
        newChar = (ord(letter) + key) % maxChar
        # Handling modulo edge case by adding value to 97
        if newChar < minChar:
            newChar = newChar + minChar
        # Encrypted character concatination
        newString += chr(newChar)
    # Return the encrypted message
    return newString

print(caesarCipherEncryptor("xyz", 2))
print(caesarCipherEncryptor("cat", 5))
