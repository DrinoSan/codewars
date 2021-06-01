# EXAMPLE:
# "10 ohms"        "brown black black gold"
# "100 ohms"       "brown black brown gold"
# "220 ohms"       "red red brown gold"
# "330 ohms"       "orange orange brown gold"
# "470 ohms"       "yellow violet brown gold"
# "680 ohms"       "blue gray brown gold"
# "1k ohms"        "brown black red gold"
# "10k ohms"       "brown black orange gold"
# "22k ohms"       "red red orange gold"
# "47k ohms"       "yellow violet orange gold"
# "100k ohms"      "brown black yellow gold"
# "330k ohms"      "orange orange yellow gold"
# "2M ohms"        "red black green gold"
def encode_resistor_colors(ohms_string):
    res = ""
    codes = {"0": "black",
            "1": "brown",
            "2": "red",
            "3": "orange",
            "4": "yellow",
            "5": "green",
            "6": "blue",
            "7": "violet",
            "8": "gray",
            "9": "white"
            }
    power_of = {
            "k": 3,
            "M": 6,
            "G": 9,
            }

    ohm, _ = ohms_string.split(" ")
    val = ohm[-1]
    

    if ohm[-1].isnumeric() != True and "." not in ohm:
        ohm = ohm[:len(ohm)-1] + "0"*power_of[val]
    elif "." in ohm and ohm[-1].isnumeric() != True:
        ohm = ohm.replace(".", "")
        ohm = ohm[:len(ohm)-1] + "0"*(power_of[val]-1)


    for i in range(0, 2):
        res += codes[ohm[i]] + " "
    
    multiplier = ""
    if len(ohm) > 2:
        multiplier = str(len(ohm) - 2)
    else:
        multiplier = str(0)
    res += codes[multiplier]
    res += " " + "gold"
    return res



    


encode_resistor_colors("4.7k ohms")
#"brown black black gold"
