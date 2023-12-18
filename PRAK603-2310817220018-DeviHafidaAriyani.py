def multiply_rows(n, row1, row2):
    result = [row1[i] * row2[i] for i in range(n)]
    return result

def main():
    n1, n2 = map(int, input().split())

    if n1 != n2:
        print("Jumlah tidak sama")
    else:
        data = []

        row1 = list(map(int, input().split()))
        data.extend(row1 * 2)

        row2 = list(map(int, input().split()))
        data.extend(row2 * 2)

        result = multiply_rows(n1, row1, row2)

        print(" ".join(map(str, result)))

if __name__ == "__main__":
    main()