import java.util.*
import kotlin.collections.ArrayList

//Write a function that takes in two integers and return their sums
fun sum_numbers(x:Int , y:Int ):Int = x + y

//A function that reverse the value of the string

fun reverse_string(s:String):String = s.reversed()

//take an array of integer and return their average

fun sum_array(a: Array<Int>):Int = a.sum()

//String and Character and Return how many time it appear in String

fun appaerance_of_char(s: String,c: Char):Int{

    var result: Int = 0
    for (i in s){

        if (i == c)
        {
            result =+1
        }
    }

    return result
}


//aaray of string and return the longest string

fun longest_string(s: Array<String>){

    var result:String = " "

    for (i in s )
    {
        if (i.length >  result.length) {

            result = i
        }
    }

    println(result)

}

//Return a list conatining only even numbers
fun even_number(array: Array<Int>){

    var arr = ArrayList<Int>(0)
    for (i in array){

        if(i%2 == 0)
        {
            arr.add(i)
        }
    }

    println(arr)


}

//return the number of word in the string

fun number_of_words(s:String):Int = s.length

//retunr the smallest number

fun smallest_number(s: Array<Int>):Int{

    var result:Int = s[0]

    for (i in s )
    {
        if (i <  result) {

            result = i
        }
    }

    return result

}
//Vowel in the string


fun vowel_string(s: Array<String>){

    var arr = ArrayList<String>()

    var vol = arrayOf('a','e','i','o','u','A','E','I','O','U')
    for (i in s )
    {
        if (vol.contains(i[0])) {

            arr.add(i)
        }
    }

    println(arr)

}

//Main

fun main(){

    var arrs = arrayOf("Iam","Shiza","TunTun","Fasih")
    var arr = arrayOf(1,2,3,4,5,6,7,8,9)
    println(Arrays.toString(arrs))
    println(Arrays.toString(arr))
    println()

    println("Sum of Number 2 and 2")
    println(sum_numbers(2,2))
    println()

    println("Reversing the String 'Fasih'")
    println(reverse_string("Fasih"))
    println()

    println("Printing the sum of the Given Int Array")
    println(sum_array(arr))
    println()

    println("Findin the Occurance of 'F' in Fasih")
    println(appaerance_of_char("Fasih",'F'))
    println()

    println("Printing the Even Number in Int Array")
    even_number(arr)
    println()

    println("Printing the Number of Words in 'Fasih'")
    println(number_of_words("Fasih"))
    println()

    println("Printing the smallest Number in Int Array")
    println(smallest_number(arr))
    println()

    println("Printing the Word Start with Vowel in String Array")
    vowel_string(arrs)
    println()

    println("Printing the Longest String in String Array")
    longest_string(arrs)

}