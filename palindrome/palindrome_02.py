class Solution:
    def isPalindrome(self, x: int) -> bool:
        aux = x
        reverso = 0

        while aux > 0:
            digito = aux % 10
            reverso = reverso * 10 + digito
            aux //= 10

        return x == reverso
