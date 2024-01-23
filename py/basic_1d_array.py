def f(nums, p, q):
    return 0

cases_count = int(input())
for _ in range(cases_count):
    p, q = list(map(int, input().split(" ")))
    nums = list(map(int, input().split(" ")))
    print(f(nums, p, q))
