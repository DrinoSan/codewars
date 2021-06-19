def peak_height(mountain):
    mountain[0] = mountain[0].replace("^", "1")
    mountain[-1] = mountain[-1].replace("^", "1")
    for i in range(1, len(mountain) -1):
        for j in range(len(mountain[i])):
            if mountain[i-1][j] == " ":
                pass
            if mountain[i+1][j] == " ":
                pass
            if mountain[i-1][j] == " ":
                pass
            if mountain[i-1][j] == " ":
                pass


mountain = [
          "^^^^^^        ",
          " ^^^^^^^^     ",
          "  ^^^^^^^     ",
          "  ^^^^^       ",
          "  ^^^^^^^^^^^ ",
          "  ^^^^^^      ",
          "  ^^^^        "
        ]


print(peak_height(mountain))
