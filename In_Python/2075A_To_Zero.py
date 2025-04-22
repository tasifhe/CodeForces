#Solved by Tasif Hossain Emon
#Student of SMUCT //BATCH 29th //ID:221071042

#*2075A. A_To_Zero //Accepted Solution

t = int(input())
for _ in range(t):
    n,k = map(int, input().split())
    print((n+k-3) // (k-1))