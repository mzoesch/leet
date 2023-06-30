class Solution:
    def myAtoi(self, s: str) -> int:
        def getNumber(_s: chr) -> int:
            if _s == '0':
                return 0
            if _s == '1':
                return 1
            if _s == '2':
                return 2
            if _s == '3':
                return 3
            if _s == '4':
                return 4
            if _s == '5':
                return 5
            if _s == '6':
                return 6
            if _s == '7':
                return 7
            if _s == '8':
                return 8
            if _s == '9':
                return 9
            return -1

        output: int = 0
        changed_sign: bool = False
        negative: bool = False
        we_already_got_valid_number: bool = False
        for a in s:
            if a == ' ' and (
                we_already_got_valid_number == True or changed_sign == True
            ):
                break
            if (
                a == '-'
                and changed_sign == False
                and we_already_got_valid_number == False
            ):
                negative = True
                changed_sign = True
                continue
            if (
                a == '+'
                and changed_sign == False
                and we_already_got_valid_number == False
            ):
                negative = False
                changed_sign = True
                continue
            if (a == '+' or a == '-') and changed_sign == True:
                break

            toAdd: int = getNumber(a)
            if toAdd == -1:
                if a == ' ':
                    continue
                break

            output *= 10
            output += toAdd
            we_already_got_valid_number = True
            continue

        if output > 2_147_483_648:
            output = 2_147_483_648
        if negative == True:
            output *= -1
        elif output == 2_147_483_648:
            output -= 1
        return output
