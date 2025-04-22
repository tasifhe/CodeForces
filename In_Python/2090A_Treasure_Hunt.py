# Solved by Tasif Hossain Emon
# Student of SMUCT // BATCH 29th // ID:221071042

# *2090A. A_Treasure_Hunt // Accepted Solution

def main():
    t = int(input())
    for _ in range(t):
        x, y, a = map(int, input().split())
        print("YES" if a % (x + y) >= x else "NO")

if __name__ == "__main__":
    main()