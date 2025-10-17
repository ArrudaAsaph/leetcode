# class Solution:
#    def isPalindrome(self, x: int) -> bool:

# Input: x = 121
# Output: true
# Explanation: 121 reads as 121 from left to right and from right to left.
# Example 2:

# Input: x = -121
# Output: false
# Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
# Example 3:       

# array = -121
# array_real = array
# aux = 0

# while (array > 0):
#     aux = (aux * 10) + (array % 10)
#     array = array // 10

# print(aux == array_real)

class Solution:
    def isPalindrome(self, x: int) -> bool:
        x_aux = x
        x_inverso = 0

        while (x_aux > 0):
            x_inverso = (x_inverso * 10) + (x_aux % 10)
            x_aux = x_aux // 10
        
        return x_inverso == x