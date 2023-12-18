def calculate_zetsu(room_count, zetsu_counts):
    result = []

    for i in range(room_count):
        result.append(zetsu_counts[i] * (i + 1))

    return result

def main():
    room_count = int(input())
    zetsu_counts = list(map(int, input().split()))

    result = calculate_zetsu(room_count, zetsu_counts)
    print(" ".join(map(str, result)))

if __name__ == "__main__":
    main()