max = 4000000
fibonacci = 1
last = 1
sum = 0
while fibonacci < max:
	fibonacci = fibonacci+last
	last = fibonacci-last
	print fibonacci
	if fibonacci%2==0:
		sum+=fibonacci
print sum