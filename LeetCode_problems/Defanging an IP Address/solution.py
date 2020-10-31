class Solution:
    def defangIPaddr(self, address: str) -> str:
        # replace all occurrences of "." with "[.]"
        return address.replace('.', '[.]')
