a , b , c , d = map(int,input().split())
if (a+b) > c and (a+c) > b and (b+c) > a:
  print("S")
elif (a+b) > d and (a+d) > b and (b+d) > a:
  print("S")
elif (a+c) > d and (a+d) > c and (c+d) > a:
  print("S")
elif (b+d) > c and (b+c) > d and (c+d) > b:
  print("S")
else:
  print("N")
