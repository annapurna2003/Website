def ext(a, b, x, y):
   if a == 0 :
      x=0
      y=1
      return b
   x1=1
   y1=1 
   gcd=ext(b%a,a,x1,y1)
   x=y1-(b/a)*x1
   y=x1
   print(x,y)
   return gcd,x,y
   print("GCD = ",gcd)
x=1
y=1
a=int(input())
b=int(input())
g=ext(a, b, x, y)