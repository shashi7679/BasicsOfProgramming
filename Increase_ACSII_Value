def LetterChanges(st):
    # code goes here
    new_str = ""
    for x in st:
        ACII_Value = ord(x)
        ACII_Value1 = ACII_Value + 1
        if (ACII_Value >= 65 and ACII_Value <= 89) or (ACII_Value >= 97 and ACII_Value <= 122):
            if (ACII_Value1 == 65 or ACII_Value1 == 97):  # for A
                new_str += chr(65)
            elif (ACII_Value1 == 69 or ACII_Value1 == 101):  # for E
                new_str += chr(69)
            elif (ACII_Value1 == 73 or ACII_Value1 == 105):  # for I
                new_str += chr(73)
            elif (ACII_Value1 == 79 or ACII_Value1 == 111):  # for O
                new_str += chr(79)
            elif (ACII_Value1 == 85 or ACII_Value1 == 117):  # for U
                new_str += chr(85)

            else:
                new_str += chr(ACII_Value1)
        else:
            new_str += x
    return new_str
print(LetterChanges("Hello!!"))
