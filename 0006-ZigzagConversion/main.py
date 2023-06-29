class Solution:
    def convert(self, s: str, numRows: int) -> str:
        storage: dict = {}
        c_height: int = 0
        ascending: bool = True

        for _, v in enumerate(s):
            if c_height <= 1:
                ascending = True
                c_height = 1

            if ascending == True and c_height <= numRows:
                storage[c_height] = f'{storage.get(c_height, "")}{v}'
                c_height += 1

                if c_height > numRows:
                    c_height = numRows - 1
                    ascending = False
                continue

            storage[c_height] = f'{storage.get(c_height, "")}{v}'
            c_height -= 1
            continue

        j: int = 1
        output: str = ''
        while j in storage.keys():
            output = f'{output}{storage.get(j, "")}'
            j += 1
            continue

        return output
