def main():
    n, k = map(int, input().split(" "))
    k -= 1

    scores = list(map(int, input().split(" ")))

    advancers = 0
    for i, score in enumerate(scores, start=0):
        if score == 0:
            continue
        elif i > k and scores[k] > score:
            break
        elif score >= scores[k]:
            advancers += 1

    print(advancers)

main()
