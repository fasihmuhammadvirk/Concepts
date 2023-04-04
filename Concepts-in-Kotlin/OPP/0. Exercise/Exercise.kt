//Create a class student in kotlin with properties name , age and grade and provdie a constructor to initialize these properties


class student(name:String , age:Int , grade:Double){


    fun averageGrade(grade:Double){

        println("Average Grade is $grade")

    }

    fun isPrime(num:Int)
    {
        var flag = false
        for (i in 2..num / 2)
        {
            // condition for nonprime number
            if (num % i == 0)
            {
                flag = true
                break
            }
        }

        if (!flag)
            println("$num is a prime number.")
        else
            println("$num is not a prime number.")

    }



    fun reverseString(name:String){

        var rname = name.reversed()
        println("Reversed String $rname")
    }


}

class Rectangular(length:Double,width:Double){

    var e_length = length
    var e_width = width
    var area:Double = 0.0

    fun calulateArea(){

        area = e_length * e_width
        println("The Area is $area")
    }


}


fun main(){

    val std1 = student("Fasih",23,3.15)
    val std2 = student("Shiza",21,3.37)

    std1.reverseString("Fasih")
    std1.averageGrade(3.37)
    std1.isPrime(21)


    val obj1 = Rectangular(3.3,3.3)
    obj1.calulateArea()

}