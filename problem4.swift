import Foundation

func getDigit(number: Int, place: Int) -> Int {
    return (number/Int(pow(10, Double(place)))) % 10
}

func lengthOfNumber(number: Int) -> Int {
    var count = 1
    var number_ = number
    while (number_ / 10 != 0) {
        number_ /= 10
        count += 1
    }
    return count
}

func isPalindrome(number: Int) -> Bool {
    let digits = lengthOfNumber( number )-1;
    for var i = 0; i < digits+1; i++
    {
        if getDigit(number, i) != getDigit(number, digits-i)
        {
            return false
        }
    }
    return true
}

let number = 9009;
assert( getDigit(number,0)==9 )
assert( getDigit(number,1)==0 )
assert( getDigit(number,2)==0 )
assert( getDigit(number,3)==9 )
assert( lengthOfNumber(number)==4 )
assert( isPalindrome(number)==true )
assert( isPalindrome(91229)==false )
var product = 0
var palindrome = 0
for var i = 100; i < 1000; i++
{
    for var j = 100; j < 1000; j++
    {
        product = i*j
        if isPalindrome(product)
        {
            if product>palindrome
            {
                palindrome=product
            }
            //NSLog("\(product)\n")
        }
    }
}
NSLog("largest palindrome \(palindrome)")