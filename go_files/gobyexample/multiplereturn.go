package main

import (
	"fmt"
)

func mult(a int) (int, int) {
	return a+2, a+3
}

func main() {
	_, b := mult(3)
	fmt.Printf("This is the result of mult : %v\n", b)
	fmt.Printf("The program ran successfully.\n")
}