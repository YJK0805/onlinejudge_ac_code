import math
a,b,c = map(int,input().split())
sol = b ** 2 - 4 * a * c
if sol == 0:
	print("Two same roots x=",-b // (2 * a),sep='')
elif sol > 0:
	print("Two different roots x1=",(-b + int(math.sqrt(b ** 2 - 4 * a * c))) // (2 * a)," , x2=",(-b - int(math.sqrt(b ** 2 - 4 * a * c))) // (2 * a),sep='')
else:
	print("No real root")