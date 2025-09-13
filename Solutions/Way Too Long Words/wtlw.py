output: list[str] = []

lines: int = int(input())

for _ in range(0, lines):
    word = input()
    if len(word) > 10:
        output.append(f"{word[0]}{str(len(word) - 2)}{word[-1]}")

    else:
        output.append(word)
for word in output:
    print(word)