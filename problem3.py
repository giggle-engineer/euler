number = 600851475143
for divisor in range(1,775146):
	if number%divisor==0:
		number = number/divisor
		print divisor