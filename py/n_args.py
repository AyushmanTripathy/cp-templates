def f(p, q):
    return 0

cases_count = int(input())
for _ in range(cases_count):
    args = list(map(int, input().split(" ")))
    print(f(*args))
