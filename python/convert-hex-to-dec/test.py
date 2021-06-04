def hex_string_to_RGB(hex_string): 
    return {"r": int(hex_string.lower()[1:3], 16), "g": int(hex_string.lower()[3:5], 16), "b": int(hex_string.lower()[5:], 16)}



print(hex_string_to_RGB("#FF9933"))
