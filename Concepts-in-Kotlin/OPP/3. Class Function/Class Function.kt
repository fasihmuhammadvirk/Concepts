

class Car3(var brand: String, var model: String, var year: Int){

    //class function
    fun drive()
    {
        println("Wroom!")

    }

    fun speed(maxSpeed:Int){

    println("Max Speed is: " + maxSpeed)

    }



fun main()
{

    val c1 = Car3("Ford","Mustang",1969)

    c1.speed(220)

}


}

fun main() {
    val c1 = Car3("Ford", "Mustang", 1969)

}