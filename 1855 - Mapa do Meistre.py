x = int(input())
y = int(input())
A = []
B = []
for i in range(y):
  A.append(input())
  B.append([0]*x)

i = 0
j = 0

ans = '!'
dr = A[0][0]

while True:
  if i < 0 or i >= y or j < 0 or j >= x:
    break
  if B[i][j] == 1:
    break
  if A[i][j] == '*':
    ans = '*'
    break
  if A[i][j] != '.':
    B[i][j] = 1
    dr = A[i][j]
  if dr == '>':
    j += 1
  elif dr == '<':
    j -= 1
  elif dr == '^':
    i -= 1
  elif dr == 'v':
    i += 1
  else:
    break
print(ans)
