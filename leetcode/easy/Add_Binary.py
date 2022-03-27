class Solution:

    
    def addBinary(self, a: str, b: str) -> str:
        def decimalToBinary(n):
            return bin(n).replace("0b","")
    
        def binaryToDecimal(n):
            return int(n,2)
        
        a = binaryToDecimal(a)
        b = binaryToDecimal(b)
        
        return decimalToBinary(a+b)
        
        