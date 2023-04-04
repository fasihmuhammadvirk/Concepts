
fun main(){



val size = 5 // Size of the shape

    /*
printing this shape using the for loop

       #
      # #
     # # #
    # # # #
      ##
 */

    for (i in 1..size) {
        for (j in size downTo 1) {
            if (j > i) {
                print(" ")
            } else {
                print(" #")
            }

        }
        println()
    }
    println("    # #")



println()
    /*
    print this shape using the for loop
    #
    # #
    # # # #
    # # # # #
     */
    var variable:String = "#"

    for (i in 1..size)
    {

        println(variable)
        variable += "#"


    }


println()
/*
    printing this shape using the for loop

          #
        # #
      # # #
    # # # #

 */

for (i in 1..size  )
    {
        for (j in size downTo 1)
        {
            if(j > i)
            {
                print(" ")
            }
            else{


                print("#")
            }


        }
        println()

    }


println()

/*
    printing this shape using the for loop

    # # # #
    # # #
    # #
    #

 */


    for (i in 1..size  )
    {
        for (j in size downTo 1)
        {
            if(j > i)
            {
                print("#")
            }
            else{


                print(" ")
            }


        }
        println()

    }


println()

/*
    printing this shape using the for loop

    # # # #
      # # #
        # #
          #

 */


    for (i in 1..size  )
    {
        for (j in 1..size)
        {
            if(j > i)
            {
                print("#")
            }
            else{

                print(" ")
            }


        }
        println()

    }



println()

/*
    printing this shape using the for loop
          #
         # #
       # # # #
     # # # # # #
     # # # # # #
       # # # #
         # #
          #

 */




    for (i in 1..size)
    {
        for (j in 1..size - i)
        {
            print(" ") 
        }

        for (j in 1..(2 * i - 1))
        {
            print("#") 
        }
        println() 
 
    }

    for (i in size - 1 downTo 1)
    {

        for (j in 1..size - i) {
            print(" ") 
        }
        for (j in 1..(2 * i - 1)) {
            print("#") 
        }
        println() 
    }


}