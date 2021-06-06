def maze_runner(maze, directions):
    next_pos = None
    for i, row in enumerate(maze):
        for j, col in enumerate(row):
            if col == 2: 
                next_pos = [i,j]

        
    for dir in directions:
        if dir == "N":
            try:
                next_pos[0] -= 1
                if next_pos[0] < 0:
                    return "Dead"
                if maze[next_pos[0]][next_pos[1]] == 1:
                    return "Dead"
                elif maze[next_pos[0]][next_pos[1]] == 3:
                    return "Finish"
            except IndexError:
                return "Dead"
        if dir == "S":
            try:
                next_pos[0] += 1
                if next_pos[0] == len(maze):
                    return "Dead"
                if maze[next_pos[0]][next_pos[1]] == 1:
                    return "Dead"
                elif maze[next_pos[0]][next_pos[1]] == 3:
                    return "Finish"
            except IndexError:
                return "Dead"
        if dir == "W":
            try:
                next_pos[1] -= 1
                if next_pos[1] < 0:
                    return "Dead"
                if maze[next_pos[0]][ next_pos[1]] == 1:
                    return "Dead"
                elif maze[next_pos[0]][next_pos[1]] == 3:
                    return "Finish"
            except IndexError:
                return "Dead"
        if dir == "E":
            try:
                next_pos[1] += 1
                if next_pos[1] == len(maze[0]):
                    return "Dead"
                if maze[next_pos[0]][next_pos[1]] == 1:
                    return "Dead"
                elif maze[next_pos[0]][next_pos[1]] == 3:
                    return "Finish"
            except IndexError:
                return "Dead"


    return "Lost"



maze = [[1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0],
        [2, 0, 0, 0, 0],
        [0, 0, 0, 0, 0],
        [0, 0, 1, 3, 0]]


print(maze_runner(maze,['W', 'E', 'W', 'E', 'N', 'W', 'N', 'N', 'S']))
