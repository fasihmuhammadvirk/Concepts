fun main(){

    val marks = 100
    var isstudent:Boolean = true

    if (marks == 100 && isstudent )// And Operator
    {

        print("You are the top of the Top of class")

    }
    else if(marks < 100 || isstudent) // OR Operator
    {

        print("You pass the Exam")

    }

    else{

        print("Invalid")
    }

}