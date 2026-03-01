// Pointer shit!
package main
import (
	"fmt"
)
func main() {
	fmt.Println("The program starts here...")
	var p *int32 = new(int32) // declaration of a pointer is similar to that of a normal language like C.
	var i int32 = 32
	fmt.Printf("The value of the pointer is %v\n", p)
	*p = 50 // note that if we did not assign the pointer a value of address, then we get the nil pointer error during the runtime.
	fmt.Printf("The value stored inside the pointer is %v\n", *p)
	fmt.Printf("The value of i is %v\n", i)
	pi := &p
	fmt.Printf("The value of the pointer to i is %v\n", pi)
	// if we change the pointer value pointing to i the value of the variable i is also changed, which is in contrast to the general variable equality.
	var slice = []int32{1, 2, 3}
	var slicecopy = slice
	slicecopy[2] = 4
	fmt.Printf("The new slice is %v\n", slicecopy)
	fmt.Printf("The original slice is %v\n", slice) // note that in the case of slices, even a change in the alias variable changes the origianl variables.
	a := [5]float32{1, 2, 3, 4, 5}
	fmt.Printf("The original array before squaring is %v\n", a)
	square(&a)
	fmt.Printf("The original array after squaring is %v\n", a)
	fmt.Printf("The result of squaring is %v\n", a)
}

func square(hehe *[5]float32) {
	for i := range hehe {
		hehe[i] = hehe[i]*hehe[i]
	}
}
