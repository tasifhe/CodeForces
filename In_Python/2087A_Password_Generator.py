# Solved by Tasif Hossain Emon
# Student of SMUCT //BATCH 29th //ID:221071042

# *2087A_Password_Generator //Accepted Solution

def main():
    t = int(input())
    for _ in range(t):
        a, b, c = map(int, input().split())

        digits = "0123456789"
        upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        lower = "abcdefghijklmnopqrstuvwxyz"

        password = ""

        for i in range(max(a, b, c)):
            if i < a:
                password += digits[i % len(digits)]
            if i < b:
                password += upper[i % len(upper)]
            if i < c:
                password += lower[i % len(lower)]

        print(password)

if __name__ == "__main__":
    main()
