def romanToInt(s: str) -> int:
        convert = {
            'I': 1,
            'V': 5,
            'X': 10,
            'L': 50,
            'C': 100,
            'D': 500,
            'M': 1000
        }
        # MCMXCIV = 1994
        # VICXMCM
        s = s[::-1];
        integer = convert[s[0]]
        for i in range(1, len(s)):
            if convert[s[i]] < convert[s[i-1]]:
                integer -= convert[s[i]]
            else:
                integer += convert[s[i]]
        return integer
            
print(romanToInt('XXVI'))