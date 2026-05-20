C
# 8bits **(unknown attachment: com.apple.notes.inlinetextattachment.calculateresult)** (1 bit=1 binary digit)
    WEEK 1 :
- [ ] Binary Digit=BIT
- [ ] red(72),green(73),blue(33) are the three colours which are used to represent any other colour on the computer screen.
- [ ] A video is a combination of frames per second.
- [ ] ALGORITHM=A method 
- [ ] Bugs in the computer OS are due to missing pieces of code in the program written by the developers.
- [ ] The process of converting instructions into code is called PSEUDOCODE.(a pseudocode is a human readable version of the code.)
   WEEK 2:(C)
- [ ] Source code => Compiler => Machine code
- [ ] \n is called an escape sequence. It is used to skip a beat and enter the next line.
- [ ] \r is also an escape sequence which is used to take the cursor to the start of the line.
- [ ] \” is used to actually print a double quote.Similarly, \’ and \\ are used.
- [ ] Any statement ending in .h is called a header file.
- [ ] Without header files, we will not be able to access some libraries.(a library is a collection of code written by the dev of the IDE.)
- [ ] Arguments => Function => Return Value
- [ ] %s is used to leave a string placeholder for a variable insertion if required.
- [ ] The ls is short form of list which is used to list out the files in the folder.
- [ ] The cd is called the Change Directory.
- [ ] The cp is called the Copy which is used to copy a folder or a file.
- [ ] The mkdir is called the Make Directory.
- [ ] The mv is called Move which is used to move a file or a folder or rename a folder or a file.
- [ ] The rm is called Remove which is used to remove a file or folder.
- [ ] The rmdir is called Remove Directory which is used to remove a directory.
- [ ] .. represents the parent folder.
- [ ] Datatypes of the c language: bool, char, double, float, int, long, string …
- [ ] Format Codes: used as the place holders.
Eg. %s is a place holder(format code) for string, %c is used for character, %f is used for float, %I is used for integer, etc…
- [ ] Conditionals:(use a space after using phrases like if.)
- [ ] NOTE: only one equals sign represents to assign a value to a variable. So to use the conditional that if two variables values are equal, we will have to use two equals signs.
- [ ] Operators in C: =, <, <=, >, >=, ==, !=, ….
- [ ] (Variable)++ is used to add 1 to the (variable).\[IFF the (variable) is an integer.\]\[Similarly — is used to subtract 1 out of the given (variable)\]
- [ ] In C language, we use double quotes for strings and single quotes for characters.
- [ ] || is called the logical operator or.It is used to represent or.
- [ ] While loops and For loops are extremely useful if you want to repeat the things.
- [ ] The variables defined in a function are only confined to the space in between the curly braces of the function.
- [ ] A do while loop does an operation again and again under a given condition.
- [ ] Definition of a function in c is one as given:
\[Output\] \[function name\](\[input\])
- [ ] To induce an infinite loop, use while(true).
- [ ] The c language truncates the decimals.Truncate means removes the decimal value.But round off means using the general round off rules.
- [ ] Type casting can be used to avoid truncating or round offing.
- [ ] In computer science, it is better to start counting from zero.
- [ ] control_c is used to force terminate the running of a program in the terminal.
 Unsigned int is used to allow only positive values and doubles the range of int. Her, unsigned is known as a qualifier.
- [ ] A floating point integer can only store 32 bits of memory, and hence we have floating point imprecision.
- [ ] A double data type can store 64 bits of memory and hence it is more precise.
- [ ] Void is a type but not a data type. That means a function can have a void “return” type.
- [ ] Boolean is not a data type in c language.
- [ ] structs(structures) is a data type which is used to combine integers or numbers with words and characters.
- [ ] int number ==> declaration
       number=7 ==> assignment 
      Int number=7 ==> initialisation
- [ ] = is called the assignment operator.( since it is used to assign a variable a value.)
- [ ] % is called the modulus operator.( used to find out the remainder.)
- [ ] Boolean expressions are of 2 types : logical and relational.
- [ ] Logical && is true if and only if both the operands are true, otherwise false.
- [ ] Similarly || returns true if and only if at least one of the operands is true, otherwise false.
- [ ] x==y is condition for equality.
      x!=y is condition for inequality. 
- [ ] Else always binds with the nearest if.
- [ ] switch() statement is a conditional statement which permits the enumeration of different cases, instead of relying on boolean expressions.
- [ ] It’s important to use “break” statement between each case, or you will “fall through” each case(unless that is the desired behaviour.)
- [ ] The ternary operator ?: is used as an alternative for the if else statement. 
- [ ] while(true) loop is called the infinite loop.
- [ ] Break is also used to terminate the while loops also.
- [ ] Do while loop is used when the code in the braces is to be run at least once.
- [ ] for(start;bool express; increment or decrement)
- [ ] The shorthand name of current directory is .
- [ ] The shorthand of the parent directory is .. 
- [ ] pwd in the terminal prints the present directory.
- [ ] We need to use cp -r flag to copy the entire directory.
- [ ] At the time program is compiled, the #define <name> <replacement> goes through the code and replaces all the places where variable <name> is used to <replacement>. That is if #include is similar to copy/paste, then #define is similar to find/replace. 
- [ ] If clang is used instead of the make command in the terminal the output file is always going to be ./a.out. If the name of the output file is to be designated. Then use clang -o <designated name> <original c file>
- [ ] A prototype is the first line of a function ended by a semicolon.
- [ ] Anything starting with a # is called a preprocessor director.
- [ ] Compiling essentially involves the following : preprocessing, compiling, assembling and linking.
- [ ] Debugging can be done sometimes by using the printf logically.
- [ ] We can use debug50 ./directory to debug the file.
- [ ] A computer always uses one more byte to store a string.Therefore whatever the string is, it always ends in a \0(this represents the end of the string.)
- [ ] If you want to print a specific character of the string in an array, then use array\[(word number)\]\[(character number)\].
- [ ] We may also initialize two or more variables in the for loop as long as the variables are of the same data type.
- [ ] The difference in the ASCII codes of an and A is 32; similar is the difference between any two lowercase and uppercase letters. Or else, we can simply use the toupper function if we have included the ctype.h library.
- [ ] The technique of using functions after they are once created saves us a lot of time.
- [ ] So long, we have been using the int main(void) but we can also use int main(int argc, string argv\[\]) to accept the command line arguments.argc means argument count and argv means argument vector.
- [ ] In the array of strings in the above description, the first string in the array, that is argv\[0\] is the name of the program itself. Initially the argument count is 1,if a name is entered, the argument count increases by one.similar increase is expected if more names are entered.
- [ ] A program has an exit status due to which a main function returns an int as an output.(Computers secretly chat with the programmers using numbers!) This is called the EXIT STATUS.
- [ ] The integers returned by the main function are called status integers.
- [ ] In general, in the computer language 0 means success and any other number means a failure.So, to indicate an error, we can return values to the main function. These returned values can be seen by using the command line argument echo $? 
- [ ] CRYPTOGRAPHY :
Plaintext => Cipher => Ciphertxt. (This process is called encryption.)
- [ ] There should be a key to cipher so that we can decode the encryption.
- [ ] A function is a black box with 0+inputs and 1 output.
- [ ] It is called a black box because we need not know the underlying implementation to use the function.
- [ ] Functions are used for organisation,simplification and reusability.
- [ ] There is a standard form for declaration of a function.
- [ ] Return type name(argument list) is the basic format of defining a function.
- [ ] It is better to name the function based on its purpose.
- [ ] The function declaration and function definition are exactly the same except for the semicolon at the end of the function declaration.
- [ ] To call a function, we need to input appropriate arguments and store the returned value in a variable of appropriate data type.
- [ ] If the function takes no input values, then the argument list is declared as void.(just as we did so many times for the main function.).SImilarly if the function doesn’t have an output, it is declared as void.
- [ ] Variables can be of two types :
- [ ] Local variables can only be accessed within the function they are defined in.
- [ ] Global variables can be accessed by any function in the whole program.
- [ ] Local variables are defined within a function ( that is within the curly braces of a function) whereas the global variables are defined outside of any function.
- [ ] Other functions cannot be used to overwrite the value of the local variables but the global variables can be changed by any function.
- [ ] It is okay to have same name for the local variables as long as they have different scopes( that is they are defined in different functions).
- [ ] To compare two strings, we can use the strcmp which returns 0 if both the strings are same and 1 if both the strings are different.
- [ ] Arrays are considered to be fundamental data structures.An array is a continuous space in the memory.
- [ ] An array has identically sized memory units called the elements of the array.
- [ ] All the elements of the array should be of the same data type.
- [ ] All the elements of an array are indexed by which they are accessed.
- [ ] Arrays are declared as type name\[size\] (It is necessary to use square braces)
- [ ] Note that the indexing of the elements starts from 0. So if you would like to access the 5th element, then it is indexed as 4.
- [ ] An array can be declared and initialised simultaneously as : 
bool truthtable\[3\]={true, false, true};
- [ ] It is not necessary to define the length of the array beforehand. The compiler is smart enough to know the length of the array according to the number of elements you have put into it.
- [ ] Arrays need not be single dimensional. That means we can define an array as int battleship\[10\]\[10\]. For us, it’s two dimensional but for the memory of the computer it’s just a 100 element one dimensional array.
- [ ] Multi dimensional arrays are great for abstraction and solving complex problems.
- [ ] We can treat individual elements of an array to be variables but we cannot consider the whole array as a variable. For example, we cannot use the assignment operator to copy all the elements from one array to another, instead we should use the looping to do so.
- [ ] Most variables in C are passed by value whereas arrays are passed by reference.
- [ ] To accept the command line arguments, we use the format of int main(int args, string argv\[\]). It is not necessary to call argc and argv as it is but it is the convention.
- [ ] These two special arguments allow us to know what data the user provided and how much data the user provided.
- [ ] Argc stores the number of user inputs. Note that the first input, that is the argv\[0\] element is the name of the program itself.
- [ ] Argv stores the actual input provided by the user as a string.
- [ ] Linear search means searching for a specific quantity linearly from the start to the end. Binary search means searching for a specific quantity in a bunch of quantities which are arranged in specific inc. or dec. order by which we can split the quantities into two equal halves and ignore the one which will not have the required quantity.
- [ ] In most cases, the binary search is better than the linear search.
- [ ] O() is used by programmers to indicate the runtime.
- [ ] If the runtime of linear search is O(n), then the runtime of the binary search is O(log n)
- [ ] The greek symbol Omega represents the least number of steps possible for the algorithm to get the result. The greek symbol Theta is used if the omega value and the original runtime value are the same.
- [ ] Note that the binary search cannot work if the data is randomly arranged.
- [ ] Use for loops if you want to do linear searches(in most cases). Remember to return some value so as to stop the program after the number is found.
- [ ] Note that returning a value to the main function terminates the program execution.
- [ ] The function strcmp from the string.h library returns a value less than 0 if the string 1 comes before string 2 (alphabetically),returns 0 if both the strings are same, and returns a value greater than 1 if the string 1 comes after string 2. \[prototype : strcmp(string 1, string 2)\]
- [ ] A Data Structure is some type of container for multiple data types.
- [ ] The C language allows us to create our own data type called the structures.
- [ ] The syntax for defining a structure is :
typedef struct
{} (name of the type defined)
- [ ] To access the data types inside the so called structure we just defined, we need to use the . Operator.
Eg : people\[0\].name=“”Abhishek”;
- [ ] To implement binary search, we need to sort the data first.
- [ ] The sorting of data can be done in many ways.
- [ ] Pseudo code for the Selection Sort : 
For i from 0 to n-1 ; Find the smallest number between the numbers\[i\] and number\[n-1\] ; Swap the smallest number with thw number\[i\].
- [ ] Note that the selection sort is not very efficient. If n are the total number of data then the selection sort is going to take the order of n ^2 steps to complete the process.
- [ ] The other type of sorting is the bubble sort.
- [ ] Pseudo code for the bubble sort :
repeat n-1 times; for i from 0 to n-2;  if numbers\[i\] and numbers\[i+1\] are out of order,, swap;
- [ ] The bubble sort is also of the order n^2
- [ ] if to the pseudo code of bubble sort, we add the quit if no swaps; then the min. number of steps required is n.
- [ ] There are many different types of sorting out there in the real world.
- [ ] The recursion algorithm;
If no doors are left
Return false
If number behind middle door
Return true
Else if number<middle door
Search the left half
Elseif number>middle door
Search the right half
- [ ] The recursion algorithm is the one which calls itself. 
- [ ] If no doors are left
Return false
If number behind middle door
Return true
This half of the algorithm is called the base cases. These cases are executed at some pint of time before the execution of the program whatsoever.
- [ ] The left over half is called the recursive cases which repeats itself during the execution of the program.
- [ ] The merge sort is a type of sorting which uses recursion.
- [ ] Pseudo Code for the merge sort :
If only one number,
Quit.
Sort the left half of the numbers
Sort the right half of the numbers
Merge the sorted halves.
- [ ] The merge sort takes n steps to sort n numbers but the space taken to sort this way is more than the other sorting methods consume.
- [ ] The merge sort is of the order nlogn(base 2)
- [ ] In General, merge sort is faster than the selection sort, which  is faster than bubble sort.
- [ ] In linear search, the idea is to iterate the array from left to right, searching for a specified element.
- [ ] In binary search, the idea of the algorithm is to divide and conquer, reducing the search area by half each time, trying to find a target number. But the downside of this type of search is that the array must be sorted.
- [ ] Worst case scenario for the linear search is the required number is at the end of the array. Best cse scenario is the required number is at the beginning of the array.
- [ ] Worst case scenario for the binary search is that the element is at the end of the array. Best case scenario is that the target element is at the midpoint of the array.
- [ ] In the bubble sort , we look at the adjacent paired elements. This process moves the lower values elements to the left and the higher valued elements to the right.
- [ ] Worst case scenario in bubble sort is that the complete array is in reverse and we would have to bubble sort each and every adjacent pairs to sort them out. The best case scenario is when the array is perfectly sorted and no swaps are needed.
- [ ] In Selection sort, we search for the smallest element in the array and swap it with the first element of the unsorted array.
- [ ] Worst case scenario for selection sort is when we have to iterate n times for the n elements. The best case scenariois when no swapping is required and the array is already sorted.
- [ ] A recursion is a type of elegant solution.
- [ ] A recursive function is one that as part of its execution, invokes itself.
- [ ] In programming, we define the factorial function as fact(n)
- [ ] fact(1)=1
fact(2)=2*fact(1) ; fact(3)=3*fact(2) and so on;
- [ ] Every recursive function has two cases :
1. The base case, which when triggered will terminate the recursive process.
2.The recursive case, which is where the recursion will occur.
- [ ] If there is only one line of code in the conditional branches, them we can ignore the curly braces.
- [ ] In general the recursive functions replace the loops of the non recursive functions.
- [ ] We may have multiple base cases or multiple recursive cases as well.
- [ ] The merge sort uses the idea of sorting the smaller arrays and merging them together in the sorted array.
- [ ] Merge sort actually uses the process of recursion.
- [ ] Pseudo code for the merge sort :
Sort the left half of the array;
Sort the right half of the array;
Merge the sorted halves.
- [ ] If the array has only one element, then we can consider it to be sorted.
- [ ] Worst case scenario of the merge sort is that we have to split n elements up, effectively doubling the sorted subarrays as we build them up. The best case scenario is when the array is perfectly sorted.(But we still have to split the array and recombine it according to the algorithm.
- [ ] The merge sort is of the order n log n.
- [ ] Hexadecimals are used to represent colours.
- [ ] 0 1 2 3 4 5 6 7 8 9 A B C D E F are the hexadecimals and are used in the hexadecimal notation.
- [ ] Binary notation cannot be used to represent the colours because they can atmost represent two colours.
- [ ] 01 02 03 04 05 06 07 08 09 represent the numbers 1 to 9. 0A 0B 0C 0D 0E 0F represent the colours 10 11 12 13 14 15 respectively. 10 represents the number 16.
- [ ] Summing up, the number in the 10’s palce is multiplied by 16 and the number in the units place is multiplied by 1 and added together.
- [ ] A hexadecimal can be represented by 4 bits.
- [ ] While representing hexadecimal numbers, we usually use the notation of 0x as a predicate.
- [ ] The space in the memory where the data is stored is called the address.
- [ ] Pointers are used to store the address of the variables.
- [ ] The operand &(variable) is used to bring out the address of the variable. 
- [ ] To print the pointer value; the syntax is :
int n=50;
int *p=&n;
printf(“%p\n”,p);
- [ ] In the above syntax, the operand int * is used to say to the computer that the referred variable is of the data type int. The place holder for a pointer is %p.
- [ ] We may also write the syntax as:
int n=50;
printf(“%p\n”,&n);
- [ ] Every time we run the program, the pointer value may change as the computer reorganises the stuff according to its algorithm.
- [ ] If in place of the pointer place holder, we use the integer place holder, we actually print the value of the variable itself.
- [ ] Actually the * operator is used to say to the computer to go there…(reference)( either the directory or something like that )
- [ ] Therefore the * operand is used for three operations :
1. for the multiplication of numbers.
2. for the reference(‘go to’ type)
3. for the declaration of a pointer.
- [ ] String is not actually a data type in the C language.
- [ ] When we find out the address of the string, we are actually finding the address of the first character of the string.
- [ ] If we use the typedef int integer, then we are actually replacing all the int datatype with the integer name card.
- [ ] In the C language we use the char *(variable ) instead of the string. So we can now use the line typedef char * string to use the datatype string instead of including the cs50 library.
- [ ] Even though the data type string is not available in the C language, the place holder for the strings is actually %s.
- [ ] The C language offers pointer arithmetic.
- [ ] We need not use the square braces every time to print out the individual elements of the string, instead we can use pointer arithmetic as follows:
printf(“%c”,*s);
printf(“%c”,*(s+1));
Etc.
- [ ] Here we are using the fact that referring to the string actually refers to the first element of the string.
- [ ] We can use the syntax : printf(“%s\n”,(s+1));
To print the word from the second letter onwards. Similar syntax can be used for printing from further upfront.
- [ ] If we use the double equals for comparing two strings, we are actually comparing their addresses.
- [ ] While we are storing a string, we simultaneously store the address(pointer) and the string.
- [ ] Whenever we equate two strings, then we are just using the second variable to copy the same  address that the original variable was storing.
- [ ] So if we make any changes to the second variable the original variable also gets changed. To avoid this, we use the malloc and free data types.
- [ ] Malloc refers to memory allocation.
- [ ] We need to specify the amount of bytes to allocate to the malloc function.
- [ ] We use the syntax malloc(5); if 5 bytes are to be allocated.
- [ ] Note that we can also use the strlen and other functions in the malloc function itself. Malloc function is actually located in the stdlib library of the C language.
- [ ] The word of zero for pointer zero is null and the word for zero character is nul.
- [ ] Malloc returns null if an error happens.
- [ ] We can use the strcpy function to copy a string from one variable to another.
- [ ] Sizeof function in C language is used to find out the size of a data type.
- [ ] Valgrind can be used in the terminal to find out any memory related mistakes.
- [ ] The include at the start ion the program is called the pre processor directive
- [ ] Program begins the execution at the  function
- [ ] Int main(void) ; here the int is the return value and the void is the input value( arguments provided to the function.
- [ ] In the c programming language we should define the variables beforehand.
- [ ] A variable in c cannot begin with a digit.
- [ ] We can also use the under scrolls in c language to define the variables.
- [ ] Scanf is used to receive info from the user.we need to address the memory location to the scan function so that it stores the entered value there.
- [ ] In general we use the & operand to refer to the address of a variable.
- [ ] %d or %I are called the format specifiers
- [ ] To represent the negative numbers, we first represent the positive numbered then inverted all the 0s and 1s and then add 1 to the final result.
- [ ] Long integer is 8 bytes
- [ ] Int is 4 bytes
- [ ] Short integer takes only 2 bytes.
- [ ] The data type unsigned int can be used if the negative numbers are not needed in the calculations. Similarly we can also define for other data types also.
- [ ] Float data type also takes 4 bytes
- [ ] Double data type takes 8 bytes
- [ ] The fmax function is used to find the maximum of the given numbers. Note that the max function 
- [ ] Lines beginning with a # are processed by the C pre processor before the compilation is started.
- [ ] We can create our own fmax function by using the conditional statements
- [ ] We can use the ternary operands in c also
- [ ] Fall through in a switch statement is sometimes used for the benefit of us and is done intentionally.
- [ ] C =a - b++ is same as c = a-b and then b+=1
- [ ] c= a- ++b is the same as doing b = b+1 and then c = a-b
- [ ] & tells us the address of something and * tells us how to get to that something.
- [ ] & is called the address of operator and the * is called the dereference operator.
- [ ] %p is used as the format code for the pointers
- [ ] (By Srijith, lecture 3)
- [ ] Conditional execution 
- [ ] Do while, while and for loops are called the conditional executions
- [ ] In a dot while loop the program executes the loop once and then checks for the condition in the while loop
- [ ] Therefore the programs loop executes at least once for a do while loop
- [ ] Do not mess up with the local and global variables.
- [ ] Note that pointers in the computers nowadays take up 64 bits of space or we can simply say 8 bytes
- [ ] Pointers are useful as we can use them to go to a specific location.
- [ ] Marks is the same as the the address of &marks\[0\]
- [ ] Char arrays are considered as strings in the c language.
- [ ] We can also define multi dimensional arrays in the c language.
- [ ] By default the c language gives 6 decimal places to a floating data type.
- [ ] Using a double data type we can store upto 16 decimal places.
- [ ] Strings are an array of characters in the c language. We do not have a separate data type for string in the c language and the format specifier for a string is %s
- [ ] To use the boolean data type we will have to include the studbool.h library.
- [ ] Bools are binary( either true or false)
- [ ] 1 means true and 0 means false
- [ ] For an integer data type we can specify the width to be left before the printing of the data type by specifying the width in the format specifier after the % symbol.
- [ ] A pointer takes a lot of space nowadays .
- [ ] Even a pointer has a memory.
- [ ] The declarations of the functions inside the library of stdio are different from what we define outside.
- [ ] Declaration of function is done by the following syntax:
 (Output type) (name)((input arguments));
- [ ] The sort and the pow functions are defined I the math library.
- [ ] So, we can define our own functions in the c language .
- [ ] We need to declare the custom function before using it.
- [ ] If we try to store a negative value in the unsigned int datatype, it uses the wrap around behaviour and wraps the value to the maximum possible value. This can lead to problems sometimes.
- [ ] The %e is used in c language to print a value in scientific notation. For example, the number 12345.68 is represented as 1.234568e+04 (here the e+04 represents the 10 to the power of 4)
- [ ] When we pass arrays to a function in c language, we are actually passing it by pointer, that is, we actually give the function the address of the first element of the array. Also, when we make changes to the array inside the function, those changes are reflected to the original array also as a new storage space is not allocated in c language for passing arrays unlike the general variable datatypes like the int, double etc. in short we can say that the arrays in c language are passed by reference and not by value.
- [ ] The const qualifier can be used to safeguard the original array from getting modified by the caller function accidentally. If the value of the array is  changed in the caller function, the program gives an error message.
- [ ] Whenever we are giving values to a function in the general format, we are actually passing by value except in the case of arrays. To pass by reference, we will have to pass the pointers of the original caller variables to the function and then operate on them to make a difference.
- [ ] Heap overflow happens when we call in the malloc function too many times and the memory allocation of the heap overflows into some other memory like the stack.
- [ ] Similarly stackoverflow happens when we create too many darn stacks that the stack memory overflows into some other memory like the heap etc.
- [ ] Heap overflow and the stack overflow are the general examples of the term buffer overflows which deal with the overflow of memory allocations .
- [ ] Type * is a pointer which stores the address of type.
- [ ] fopen is used to open a file for future reading or writing.
- [ ] Close closes the file opened.
- [ ] Always remember to close the files you have created to prevent any kind of memory leaks.
- [ ] The FILE datatype is used to create a new file.
- [ ] The syntax used is as follows: FILE *input = fopen(“hi.txt”, “r”);
- [ ] Inside the fopen , we first define the name of the file and then define the mode of the file. r represents read mode and w represents the write mode.
- [ ] A buffer is a chunk of memory that can store some data from the file.
- [ ] Fread reads data from a file into a buffer.
- [ ] Fwrite writes data from a buffer to a file.
- [ ] Remember that a pointer is nothing more than an address.
- [ ] If we don’t set a value for the pointer, the default value is NULL.
- [ ] & is also called the address extraction operator.
- [ ] We can access the data possessed in the pointer address by using the dereferencing operator.
- [ ] If the pointer to an int is p, then the data stored in that memory address can be accessed by using *p.
- [ ] We get a segmentation fault when we try to dereference a NULL pointer.
- [ ] It is a good practice to set the pointers to NULL if we do not use it anymore .
- [ ] A type def is a keyword in c which is used to create a shorthand notation for datatypes.
- [ ] In summary: 
- [ ] unsigned char is suitable for storing small non-negative integer values, often used for character data (like ASCII values) or small byte-sized data.
- [ ] unsigned int is used for larger non-negative integer values when the range of unsigned char is insufficient.
- [ ] A structure in C is a user-defined data type that allows you to group together variables of different data types under a single name.
- [ ] Recursion is the process the function in the function itself.
- [ ] We can use the process of recursion to avoid long loops and confusion
- [ ] Typically recursion is inefficient.
- [ ] Recurson causes unnecessary repeated computation.
- [ ] Iteration is difficult to code and debug
- [ ] Recursion is base case  + recursion
- [ ] A global variable is always initialised to 0 whereas a local variable is initialised to a garbage value.
- [ ] If a global and a local variable have the same name, then the local variable will have the preference over the global variable .
- [ ] Python allows the use of under scrolls to improve the readability of the code.
- [ ] We can also define constant pointers in c language where they point to a constant memory location and the must be initialised at the time of defining them.
- [ ] Attempting to change a constant variable causes an error.
- [ ] After providing the memory the malloc() function returns a pointer to that piece of memory.
- [ ] If malloc can’t give the memory requested then it will return NULL
- [ ] The dynamically allocated memory has to be returned back to the system manually after the program has been executed which is not the case with the static variables.(This is termed as the memory leak)
- [ ] We need to use the free to give back the memory to the system.
- [ ] Memory leaks can slow down the system.
- [ ] Every block of memory that we malloced should be freed subsequently.
- [ ] We should not free the memory that we did not malloced.
- [ ] We should not free the same malloc more than once.
- [ ] When a function is called, the system sets aside a big chunk of memory for that function to work with.
- [ ] These memory spaces are called the stack frames.
- [ ] At a certain instant of time we can have more than one type of stack frames defined.
- [ ] All the stack frames are arranged in the stack such that the recently called function is at the top of the stack.( the function at the top is called the active frame)
- [ ] When a function is called off, it is popped off and the frame next to it becomes the active frame( the function picks up from where it left off)
- [ ] This stack is the main structure behind the recursion .
- [ ] C provides us with the file data type to store the persistent data.
- [ ] Persistent data means the data which does not get erased after we run the program.
- [ ] All the file manipulation functions lie in the stdio.h library.
- [ ] While working with the files, we mostly represent them with their respective pointers.
# Pointer arithmetic
- Pointer son the same type can be assigned to each other.
- Functions can also have pointers. These contain the address of the function
- The keyword null is defined in the library <stddef.h>

### Structures
- [ ] A structure cannot contain an instance of itself.
- [ ] But it can contain a pointer to the same structure type.(Self referential structure )
- [ ] Assignment operator is possible to apply between two structs of the same data types.(Compilation error if they are of different structure types.)
- [ ] Structures also have addresses and we take the pointer of the structured variable.
- [ ] We can access the variables of the structure, zero initialise the structure data type and also use the size of function on the structure.
- [ ] Direct comparisons between the structures is not allowed between the structures.
- [ ] A word is a standard memory unit in the computer memory and is usually 2 to 4 bytes of size.
- [ ] If the list containing the assignment values is insufficient, then the remaining variables are assigned to 0 or NUL( if it is a pointer to another variable.)
- [ ] We can also use the dot operator to assign and access a value to the variables inside the structure.
- [ ] Arrow operator( -> ) is used to access the variables inside the structure.
- [ ] The above arrow operator is equivalent to the operation of (*structure name).(variable name);
- [ ] So an arrow operator access the members of a structure pointer.
- [ ] We can pass structures to the functions in two ways: we can pass the whole structure or pass only definite members of the structure. Both the ways the passing is pass by value.
- [ ] To pass by reference we have to pass the address of the structure.
- [ ] To pass an array by value, we  will have to create a structure containing the array and pass the structure by value.
- [ ] Note that strings separated by white spaces in printf are concatenated.
- [ ] The ## operator is used to concatenate two tokens and create a variable name.
- [ ] Fmax is used to find the largest number between any two given numbers and it is present in the math.h library.
- [ ] The memory related zero is represented by NULL and the character related zero is represented by the term NUL.
- [ ] To copy a string to a variable the function used is strcpy(destination, source).
- [ ] Calling the functions in c uses the stack memory and using the malloc functions uses the heap memory.
- [ ] We almost always use the ram for working in our programs.
- [ ] Memory is generally refereed in hexadecimal notation.
- [ ] We should always set the pointer to null if we cannot set it into something meaningful into e beginning .
- [ ] If we dereference a pointer that is pointed to null then we get a segmentation fault.
- [ ] Typedef <oldname> <newname>
- [ ] Queues are first in first out.
- [ ] Stacks are last in first out.
- [ ] We can use linked lists instead of the arrays and normal lists.
- [ ] A linked list is a data structure which is popular for its dynamic nature and stability but it is very tough to code and punishing if we do not free the memory.
- [ ] Trees are other type of data structures.
- [ ] A tree is like a two dimensional data structure.
- [ ] There are a type of tree called the binary trees which can be binarily searched through even though they are two dimensional.
- [ ] Note that we cannot do binary search on the linked lists.
- [ ] In a binary tree each node contains two pointers. One of them points to the left and the other points to the right.
- [ ] We take n steps to search for a number In a linked list and we take log to the base 2 of n steps to search for a number in a binary tree.
- [ ] But the process to code a binary search tree is extremely hard and tedious if the numbers are not inputed in ascending or a descending order. 
- [ ] And also we need to balance the tree in order for the binary search to work.
- [ ] A dictionary is another data structure in c
- [ ] Analogies for the word and definition are keys and values.
- [ ] The concept of buckets is used to breakdown a large set to smaller ones which helps for further actions.
- [ ] Hash functions and hash tables do the same as stated above in computers.
- [ ] The hash tables are like the mixture of linked lists and arrays .
- [ ] Another data structure in computer language is a try. It’s a tree of arrays.
- [ ] However big the data structure is it takes a constant number of steps to find a number or name.
- [ ] A linked list contains nodes which are special type of structures which contain a data type and a pointer to another node of the same structure type.

![[SCR-20251130-lbil.png]]