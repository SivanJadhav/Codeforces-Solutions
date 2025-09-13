implementations: int = 0

lines: int = int(input())

for _ in range(0, lines):
    p, v, t = input().split()
    p, v, t = int(p), int(v), int(t)

    if (p & t) or (p & v) or (t & v) == 1:
        implementations += 1
print(implementations)
