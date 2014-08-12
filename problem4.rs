use std::num;

fn get_digit( number: int, place: uint ) -> int
{
	return ( number/num::pow(10i,place) ) % 10;
}

fn length( number:int ) -> uint
{
	let mut count = 1;
	let mut num = number;

	while num/10!=0 
	{
		num=num/10;
		count+=1;
	}

	return count;
}

fn is_plaindrome( number:int ) -> bool
{
	let digits: uint = length( number )-1;
	for i in range( 0u, digits+1 )
	{
		if get_digit( number, i )!=get_digit( number, digits-i )
		{
			return false;
		}
	}
	return true;
}

fn main() 
{
	let number = 9009;
	assert!( get_digit(number,0)==9 );
	assert!( get_digit(number,1)==0 );
	assert!( get_digit(number,2)==0 );
	assert!( get_digit(number,3)==9 );
	assert!( length(number)==4 );
	assert!( is_plaindrome(number)==true );
	assert!( is_plaindrome(91229)==false );
	let mut product = 0;
	let mut palindrome = 0;
	for i in range( 100i, 1000 )
	{
		for j in range( 100i, 1000 )
		{
			product = i*j;
			if is_plaindrome(product)
			{
				if product > palindrome
				{
					palindrome = product;
				}
			}
			println!( "{}", product );
		}
	}
	println!( "largest palindrome: {}", palindrome );
}