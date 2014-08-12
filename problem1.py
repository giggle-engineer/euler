numbers = range(1,100)
sum = 0
for number in numbers:
	if number%3==0:
		sum+=number
	if number%5==0:
		sum+=number
print sum