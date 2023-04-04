
import java.util.Scanner
val read = Scanner(System.`in`)

fun addition(num1:Double
             ,num2:Double): String{

    var result: Double = num1 + num2
    return "The Solution of the Addition is $result"
}

fun subtraction(num1:Double,num2:Double): String{

    var result: Double = num1 - num2
    return "The Solution of the Subtraction is $result"
}

fun multiplication(num1:Double,num2:Double): String{

    var result: Double = num1 * num2
    return "The Solution of the Multiplication is $result"
}

fun division(num1:Double,num2:Double): String{

    var result: Double = num1 / num2
    return "The Solution of the Division is $result"
}

fun menu(choice:Int){

    if (choice == 1){

        println("Enter the First Number")
        val number1 = read.nextDouble()
        println("Enter the Second Number")
        val number2 = read.nextDouble()

        println(addition(number1,number2))

    }

    else if (choice == 2){

        println("Enter the First Number")
        val number1 = read.nextDouble()
        println("Enter the Second Number")
        val number2 = read.nextDouble()

        println( multiplication(number1,number2))
    }
    else if (choice == 3){

        println("Enter the First Number")
        val number1 = read.nextDouble()
        println("Enter the Second Number")
        val number2 = read.nextDouble()

        println(subtraction(number1,number2))

    }
    else if (choice == 4){

        println("Enter the First Number")
        val number1 = read.nextDouble()
        println("Enter the Second Number")
        val number2 = read.nextDouble()

        println(division(number1,number2))

    }
    else{

        print("Invalid")
    }


}

fun main(){


    while(true){

        println("Enter Your Choice: ")
        println("1-Addition")
        println("2-Multiplication")
        println("3-Subtraction")
        println("4-Division")
        println("5-Quit")
        print("->")
        val choice = Integer.valueOf(readLine())
        if (choice == 5){

            break
        }
        else{

            menu(choice)
        }



    }

}