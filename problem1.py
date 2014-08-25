numbers = range(1,1000)
sum = 0
for number in numbers:
	if number%3==0 or number%5==0:
		sum+=number
print sum