def f(p, q):
    return 0

cases_count = int(input())
for _ in range(cases_count):
    p, q = list(map(int, input().split(" ")))
    print(f(p,q))
