class Solution:
    def intToRoman(self, num: int) -> str:
        output: str = ''

        while num >= 1000:
            num -= 1000
            output = f'{output}M'

        if num >= 900:
            num -= 900
            output = f'{output}CM'

        while num >= 500:
            num -= 500
            output = f'{output}D'

        if num >= 400:
            num -= 400
            output = f'{output}CD'

        while num >= 100:
            num -= 100
            output = f'{output}C'

        if num >= 90:
            num -= 90
            output = f'{output}XC'

        while num >= 50:
            num -= 50
            output = f'{output}L'

        if num >= 40:
            num -= 40
            output = f'{output}XL'

        while num >= 10:
            num -= 10
            output = f'{output}X'

        if num >= 9:
            num -= 9
            output = f'{output}IX'

        while num >= 5:
            num -= 5
            output = f'{output}V'

        if num >= 4:
            num -= 4
            output = f'{output}IV'

        while num >= 1:
            num -= 1
            output = f'{output}I'

        return output
