def multiply_matrices(n, A, B):
    result = [[0 for _ in range(n)] for _ in range(n)]

    for i in range(n):
        for j in range(n):
            for k in range(n):
                result[i][j] += A[i][k] * B[k][j]

    return result

def print_matrix(matrix):
    for row in matrix:
        print(" ".join(map(str, row)))

def main():
    n = int(input())
    print("Matriks A")
    A = [list(map(int, input().split())) for _ in range(n)]
    print("Matriks B")
    B = [list(map(int, input().split())) for _ in range(n)]

    result = multiply_matrices(n, A, B)

    print("Matriks AXB")
    print_matrix(result)

if __name__ == "__main__":
    main()