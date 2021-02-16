(*********************************************************************************
* Fizz Buzz Test using ocaml:                                                    *
* Write a program that prints the numbers 1 to 100 but for multiples of three,   *
* print "Fizz" instead of the number and for the multiples of five, print "Buzz".*
* For numbers which are multiples of bthree and five print "FizzBuzz"            *
**********************************************************************************)

(*This function uses a match statement and tail recursion to print the output*)
let fizz_buzz = 
  let rec aux num =
    if num <=100 then
      match (num%3, num%5) with
        |(true,true)-> print_string("FizzBuzz, ")
        |(true,false) -> print_string("Fizz, ")
        |(false,true) -> print_string("Buzz, ")
        |(false,false) -> print_int(num); print_string(", ");
    else print_string("")
  in aux 1;;