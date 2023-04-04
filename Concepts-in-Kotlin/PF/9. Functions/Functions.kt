//Pre Defined Function
fun main()
{
    println("Hello World")

}


//Create Your Own Functions

fun mtFuction()
{
    println("I am Learning")
}

//Function Parameters

fun myFunction2(fname: String){

    println(fname + " Doe")
}


//Multiple Parameters

fun myFunctions3(age: Int , fname : String){  //We have to Declare the DataType of the Parameters

    println("Age is $age")
    println("Name is $fname")
}

//Return Value

fun myFunction4(x:Int):Int{   //We have to Declare the Return Type  in Advance infront of the Function e.g in the given Example Int

    return (x+5)
}


//Inline Function

fun myFunction5(x:Int,y:Int) = x+y

