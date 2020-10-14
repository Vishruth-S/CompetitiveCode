from string import ascii_lowercase as letters


def shift(list, num):
    """
    this function shifts the position of an existing list or string and returns it as a new list
    """
    list = [x for x in list]
    for i in range(num):
        first = list[0]
        list.pop(0)
        list.append(first)

    return list


def cipher(string, key):
    """
    this function ciphers a string using the caesar's cipher method
    string: the message to cipher
    key: the number of times to shift the letters in the alphabet
    it returns the ciphered string"""

    nletters = shift(letters, key)

    def cipher_word(string):
        msg = []

        for i in string:
            index = letters.index(i)
            i = nletters[index]
            msg.append(i)

        return "".join(msg)

    sentence = string.split(" ")
    nsentence = list(map(cipher_word, sentence))

    return " ".join(nsentence)


if __name__ == "__main__":
    # just a test
    print(cipher("xyz", 2))
    print(cipher("cat", 5))
