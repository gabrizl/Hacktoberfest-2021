J = map(int,input().split())
R = map(int,input().split())
listJ = []
listR = []
val = 0
for i in J:
  listJ.append(i)
for i in R:
  listR.append(i)
for i in listJ:
  for o in listR:
    if o == i:
      val = val+1
if val == 3:
  print("terno")
elif val == 4:
  print("quadra")
elif val == 5:
  print("quina")
elif val == 6:
  print("sena")
else:
  print("azar")
