result = ""
s=input()
n=int(input())
for i in range(len(s)):
    char=s[i] 
    if (char.isupper()):
        result+=chr((ord(char)+n-65)%26+65)
    else:
        result+=chr((ord(char)+n-97)%26+97)
print(result)

#ceaser cyper is when n is 3
#mono cyper is when n is a variable and user gets to choose it