fun main(){

    //while using val we cant change the value of the variable again
    val id = 1
    print(id)
    // id = 2 //this will give error
    print(id)

    //Type Inference First Assigne then changing the value
    //crtl shift P to known the type of the variable
    var names = "Fasih"
    print(names)
    names = "Shiza"
    print(names)


    //Type Checkin Error
    var new_id = 1
    print(new_id)
    //var new_id = 1.1 // This is an error as the new_id value is integer

    //Variable definition
    //We can also define the varibale with the specific data type if we want too

    var ids:Int = 5
    var name : String = "Khan"
    var marks: Float = 5.5F // for float we have to use F at the end of the value
    var total_marks:Double  = 100.122 //for Double we dont use any
    val single : Char = 'K'
    val isstudent: Boolean = true
}

