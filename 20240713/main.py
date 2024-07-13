R,G,B = map(int,input().split())
C = input()

if C == 'Red':
  if G > B:
    print(B)
  else:
    print(G)

if C == 'Green':
  if R > B:
    print(B)
  else:
    print(R)
      
if C == 'Blue':
  if R > G:
    print(G)
  else:
    print(R)