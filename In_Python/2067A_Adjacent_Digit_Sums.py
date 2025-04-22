# Solved by Tasif Hossain Emon
# Student of SMUCT //BATCH 29th //ID:221071042

#*2067A_Adjacent_Digit Sums //Accepted Solution

def solve():
    x, y = map(int, input().split())
    d = x + 1 - y

    if d >= 0 and d % 9 == 0:
        print("Yes")
    else:
        print("No")

def main():
    t = int(input())
    for _ in range(t):
        solve()

if __name__ == "__main__":
    main()
