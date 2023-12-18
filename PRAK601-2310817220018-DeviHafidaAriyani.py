def create_matrix(rows, cols, values):
    matrix = [[0] * cols for _ in range(rows)]
    index = 0

    for i in range(rows):
        for j in range(cols):
            matrix[i][j] = values[index]
            index += 1

    return matrix

def print_matrix(matrix):
    for row in matrix:
        print(" ".join(map(str, row)))

def main():
    rows, cols = map(int, input().split())
    values = list(map(int, input().split()))

    matrix = create_matrix(rows, cols, values)
    print_matrix(matrix)

if __name__ == "__main__":
    main()