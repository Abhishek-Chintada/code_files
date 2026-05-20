Various sources.

- [ ] Go is a statically typed language. Also note that go is not object oriented programming language.
- [ ] Go has packages and modules. A package is a collection of go files and a module is a collection of packages.
- [ ] The package fmt is used in printing statements to the console or give output.(fmt.Print or fmt.Println)(just like java!)
- [ ] To declare a variable we use the format of “var \[variable name\] \[variable data type\]”
- [ ] If we import a package and not use it then the compiler throws an error. The same goes for the variables.
- [ ] In addition to int we have int8, int16, int32 and int64 to specify the number of bits used to store the value of the variable.
- [ ] Note that the compiler won’t show any errors for overflow or underflow mistakes. We need to take care of them manually. If not taken care of, we get weird results which make it hard for debugging later.
- [ ] We can also use unsigned int in go using the keyword of uint.
- [ ] We can declare floats in go but we will need to specify the number of bits as 32 or 64 to avoid complier errors.
- [ ] We cannot use the arithmetic operators using variables of different data types as we do in python. We will have to typecast one of the variables.
- [ ] We actually use the string data type in go! While initialising the string(we use double quotes to represent strings as usual), we can use \n to represent the line break in string variable.
- [ ] Concatenation of strings using the + is allowed in go.
- [ ] The built in length function is based on the vanilla ASCII and any other fancy characters like the alpha, beta and gamma symbols give wrong results. So we have to use the unicode utf8 package to find the length of a string correctly using the RuneConntInString function.
- [ ] Booleans are declared using the bool data type and they can be ‘true’ or ‘false’
- [ ] Whenever not initialised the go compiler sets them to default values. The default value for number data types is 0 and the default data type for strings is “” (empty string) and finally for boolean its false.
- [ ] If we initialise while declaring there is no need to put the data type in the syntax and we can use the short hand notation of := to drop the var keyword also.
- [ ] We can assign multiple variables at once in all the same ways as we intialise the single variables.
- [ ] Similar to var we can declare const types also.
- [ ] Declaration and initialisation of the constants should be done at the same time or else we get a compiler error.
- [ ] Note that for any function we will have to put the opening curly brace just after the parameter list or else we get a compiler error.
- [ ] While printing if we want to print the variable we use java like syntax if we use Println.(we may even exclude the + and use commas instead, note that the compiler automatically adds spaces so need to hardcode them.). we can also use the c like syntax if we use Printf.!
- [ ] We just type the return data type(s) in another set of () after the parameter list is completed to specify to the compiler what type we will be returning .
- [ ] We can define our own errors in go using the errors package and the error variable.
- [ ] The default value of an error data type is nil.
- [ ] While using else ifs the else should be just after the closing bracket of the before condition or else we get an error during the compilation.
- [ ] The && and the || represent the and and or operators.(just like c!)
- [ ] We can also use the switch statements in go but there is no need to specify the break statement after every case explicitly.! (COOL!)
- [ ] We can also declare arrays in go.
- [ ] The indexing is similar to the python style.
- [ ] Similar to c the & symbol is used for referencing.
- [ ] We can initialise the arrays like “var arr \[3\]int32 = \[3\]int32{1, 2, 3}” or like “arr := \[3\]int32{1, 2, 3}”
- [ ] We also have additional data structure as slices in go.
- [ ] A slice is nothing but an array with additional properties.
- [ ] While defining a slice we do the same as an array but we do not define the size in the square braces.
- [ ] We can append to a slice using “\[slice_variable name\]=append(\[slice_variable_name\], \[value to be appended\])”
- [ ] A slice has length (equal to the number of elements in it) and a capacity (the total number of elements it can hold.)-> the capacity can be accessed using the cap(\[slice_variable_name\]) and the length can be accessed using the len(\[slice_variable_name\])
- [ ] But if we try to access the elements of the slice which we have not yet defined we will get an index out of range error.
- [ ] We can append two slices using the “append(slice_1, slice_2…)” note that the dots after the second slice are required and if omitted throw a compiler error.
- [ ] We can use the make function to optionally specify the length and the capacity of the slice. The syntax is : “var slice \[\]32 = make(\[\]int32, 3, 8)” here 3 is the length and 8 is its capacity.
- [ ] A map in go is similar to the dictionary in python. We can look up values using the keys to the values.
- [ ] Syntax for a map: “var myMap map\[data type for keys\]datatype for values = make(map\[data type for keys\]datatype for values)”
- [ ] We can also initialise the map instantly as : “var myMap = map\[string\]uint8{“Abhi”:18, “Koushik”:22}”
- [ ] If we try to access the value of a key that isn’t present we get the default value of the value data type. Here we have to be careful with go as it always returns something as the output in the case of maps. Note that the map also returns another boolean value which says whether the element is present or not.
- [ ] We can delete arguments in the map using the delete keyword.syntax: “delete(myMap, “hehe”)
- [ ] We can use the range keyword to iterate over the maps, arrays or slices.
- [ ] Note that while iterations over the map no ordering is preserved.
- [ ] In general we will have to assign two variables for the for loop while using range, first one for indexing and the second one for the array value. If we use only one variable we will get only the index and not the original value we intended to get.
- [ ] Note that there are no while loops in go. We will have to tweak the for loop to get to the functioning of a while loop.
- [ ] We can use break statements similar to the other languages that is to quit a loop.
- [ ] We can also use the c type syntax to define a for loop.
- [ ] The ++ and the — shit work here in go!
- [ ] Preallocation of memory to a slice saves a lot of time for execution. Check the go files in the goland
- [ ] Go represents the strings using the utf8 structure.
- [ ] The indexing of the string means indirectly indexing of the underlying byte arrays.!
- [ ] We can have named return values in go. In such cases the return names are treated as just variables and at the end of the function just using return will return all the named return variables. This is called a naked return. This type of return should be avoided for large functions as it affects the readability of the code.
- [ ] Never forget that the type of the variable is always defined after the variable name, be it in the function parameters or normal declarations.
- [ ] Note that we can only use the constructor of := inside any function but outside the functions we will have to use the var keywords as usual. This means that outside of functions every statement should start with a keyword.



![[Screenshot 2025-12-15 214216.png]]



- [ ] Go deals the number of characters as the number of bytes of info available. Hence when using strings with special characters we do not get the correct result if we use the length function.
- [ ] The easiest way to deal with strings is to cast them to an array of runes.
- [ ] We can declare a rune type by using a single quote as well.
- [ ] Note that strings are immutable in go, that is we cannot modify them once created.
- [ ] We can concatenate strings using the + symbol. Though note that we need to create a new string variable in order to store the concatenated string. So we can use the string builder methods (by importing gos string package) for some more efficiency.
- [ ] We can also define structs in the go language also.
- [ ] A structure is nothing but defining our own type.



![[SCR-20251220-prpb.png]]



- [ ] If not assigned anything the default value for that data type is assigned automatically by go.

![[SCR-20251220-pslx.png]]

- [ ] We can use the dot operator or the above syntax to define the variables inside our structure.
- [ ] We can even omit the field names and they will be assigned in order.
- [ ] We can use structs inside structs in go.
- [ ] If we just use the data type in the field place in a structure we have successfully defined a filed with the same name as the data type.
- [ ] We can define anonymous structs in go as follows:



![[SCR-20251220-pwvt.png]]


- [ ] The main drawback of these anonymous structs is that they are not reusable.

![[SCR-20251220-pzsv.png]]


![[SCR-20251220-qaey.png]]



- [ ] In order to get the full functionality of a structure inside a function we have to use the following syntax.
- [ ] If we want to use the same function for different objects we can use the interface keyword.



![[SCR-20251223-hpvw.png]]


- [ ] This interface allows us to use the same method that follows the above syntax to be used for any type of engine structs defined. For example the same function can be used for both electric and gas engines.

# Pointers in Go!

- [ ] Similar to C pointers in Go are also represented by *<data type> form.
- [ ] If not defined initially the pointer actually points to null.
- [ ] * is the dereferencing operator in Go similar to C
- [ ] We should always make it a habit to never leave a pointer to nil and if it needs to be kept nil then rather not use it than leaving it to point to nil.
- [ ] Again similar to C & is the referencing operator in Go.
- [ ] Note that the slices in the go language are always working with pointers so whenever you equate one slice with another and change the value in one slice then the other slice will also get overridden. The arrays of go on the other hand work with memory and false variables rather than pointers hence the original is always preserved.
- [ ] Note that although the concept of false variables is good for small scale arrays, but for large data sets this can be very demanding on the memory of the computer.


# Go Routines! (Welcome to Insanity)

- [ ] First of, Goroutines are lightweight, independently executing functions in Go, managed by the Go runtime, not the OS, allowing for highly efficient concurrency with minimal overhead.
- [ ] Note that concurrency is not the same as parallel execution. Concurrency jumps to other program while one tasks function is waiting to get done, whereas the parallel execution means that no matter what the case is, the task’s functions are ran simultaneously.



![[SCR-20251223-plzv.png]]


- [ ] If we put a go keyword before the dbCall(I) in the line 11, concurrently all the iterations will be done and hence the program exits even before the results appear 😂.
- [ ] To get out of this mess, we use the wait groups by importing the sync package.
- [ ] Syntax in the code in vscode.
- [ ] Sometimes when two processes write to the same memory address at the same time, we get a host of errors such as missing data which may go unnoticed.
- [ ] To do the writing to the memory in the code we should use the mutex package to avoid these errors which go unnoticed.
- [ ] The mutex has lock and unlock functions, we can use them to lock which will not allow any other waiter to take charge of the following statements until the current waiter unlocks. Note that the lock and the unlock functions should be placed properly and their placement should mostly be at the places where we write data. If not placed properly we may even destroy the sole purpose of the waiter function.
- [ ] One drawback is that the bare mutex does not allow any other go routine to access the current locked routine. We can use the RWmutex to resolve this issue which provides Rlock and Runlock functions.
- [ ] Go routines use various cores of our cpu based on the need for concurrency.
- [ ] We can define computed constants in go lang to some extent. We can declare constants as long as they can be computed during the compile time whereas we cannot declare constants which need to computed during the runtime.



![[SCR-20251224-ndpd.jpeg]]



- [ ] A fun fact , := are called walruses in the go language.
- [ ] In go lang we can have an initial statement where we can define variables which are defined in the scope of the if statement only.
- [ ] Note that in go we do not use parantheses around the conditional statement.
- [ ] Gos switch case statements operate differently from other programming languages, the cases have a break statement inbuilt which need not be specified but for fall through to happen we will have to specify at the end of the case using the fall through keyword.
- [ ] An _ is used as a blank identifier and can be used to ignore return values;.
- [ ] Guard clauses leverage the ability to return early from a function (or continue through a loop) to make nested conditionals one dimensional.
- [ ] Error handling in go is much easier while using the guard clauses.
- [ ] While writing code its is important to write it in such a way that the cognitive load on the reader is reduced by reducing the number of entries their brain has to process at any given point of time.
- [ ] Go supports first class and higher order functions that is the functions are treated as just another data type. That means we can give one function as an argument to another function.



![[SCR-20251228-ihai.png]]


- [ ] We can create anonymous functions and as the name suggests they do not have a name themselves and they are used whenever we need to define a function which is used only once and whenever we need to create a quick closure.
- [ ] Defer statements in go are used to make sure that something happens before the function exits, even if there are multiple statements. (Didn’t understand shit about it!)


![[SCR-20251228-rtkz.png]]


![[SCR-20251228-rtpp.png]]


- [ ] Note that if we have multiple defer statements then the statements are executed in the LIFO order.
- [ ] Also if printing any values in the defer statement note that the value of the variable will be noted as that which is present when the defer statement is encountered. So use it wisely.
- [ ] The most powerful use of the defer statement is that it still executes even during a panic state that means even during a crash or a segmentation fault.
- [ ] Go is a block scoped language (like C) and not function scoped (like the python). We can also create explicit blocks in the go language. (Explicit blocks are supported by a lot of languages out there.)
- [ ] We can have closure functions in the go language. These functions references the variables which are outside the functions body.



![[SCR-20251228-swed.png]]


- [ ] We can create nested structs to make more complicated structs.
- [ ] The fields of a structure that is the variables defined inside the structure can be accessed by using the dot operator.
- [ ] We can also create an anonymous structure. But note that we will have to instantiate it immediately after defining it.
- [ ] We use anonymous structs when we never ever need to use them again anywhere else in the code. But note that they may be useful in very special cases.
- [ ] Although go is not object oriented we can use embedded structs to create an impression of a class and an object.



![[SCR-20251231-kekj.png]]




![[SCR-20251231-keul.png]]


- [ ] Also go supports methods that are built on structs. Note that we are calling them methods and not functions. The functions which do have a receiver (just structs named as receivers which are to be placed before the function name unlike the general variables.)
- [ ] Memory layout of a structure is good to know but there is not much use of it, also note that if ever we would like to manage our memory in the best way possible then we should arrange the fields by size from largest to smallest.


![[SCR-20251231-quce.png]]


- [ ] This type of program will return the size of the structure.
- [ ] We can also create empty structs in go lang and surprisingly there are two interesting facts about them, one of them is that they are the smallest possible type in go and also the second fact is that they are used quite often in maps and channels.



![[SCR-20251231-qwvp.png]]