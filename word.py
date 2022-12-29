//Solved by Tasif Hossain Emon
 //Student of SMUCT //BATCH 29th //ID:221071042
s = input()
c = 0
for x in s:
    if x.isupper():
        c += 1

if c > len(s) // 2:
    s = s.upper()
else:
    s = s.lower()

print(s)